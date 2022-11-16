
//subroutines and jumps in assembly

int main() {
    int a = 1;
    int b = 1;
    int next = 0;

    while(next < 10) {
        next = a + b;
        b = a;
        a = next;
    }
}