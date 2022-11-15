#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//function calls in assembly


int get_number() {
    // at the beginning of every function, there's the function prologue:
    // - push rbp (this saves the old base pointer so that the function can restore it after completion)
    // - mov rbp, rsp (this moves the base pointer down to the top of the current stack frame)
    // - sub rsp, [number of bytes the function needs to use] (this allocates space on the stack for the current function)

    // this should make space on the stack for 10 bytes to store the buffer
    char buf[10];
    fgets(buf, sizeof(buf), stdin);
    int result = atoi(buf);

    // at the end of every function, there's the function epilogue:
    // - mov rsp, rbp (deallocates stack space)
    // - pop rbp (restores the old base pointer)
    // - ret (pops the return address into instruction pointer register rip)
    return result;
    // return value is stored in register rax by the calling convention
}

// in x86, first 6 function args are passed in registers, then remaining args are pushed onto stack
// argument order (registers): rdi, rsi, rdx, rcx, r8, r9
int speak(char* word) {
    printf("The program says, '%s'\n", word);
}

int main() {
    char phrase[] = "(╯°□°)╯︵ ┻━┻ ";
    speak(phrase);

    // calling any function uses the "call <function name>" instruction in assembly
    // this instruction pushes the address of the NEXT instruction onto the stack, then changes the instruction pointer to start 
    // execution in the function being called
    int answer = get_number();

    // this is where execution resumes
    printf("You said: %d\n", answer);
    return 0;
}
