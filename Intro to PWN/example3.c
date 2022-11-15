

//function calls in assembly

int speak(char* word) {
    printf("The program says, '%s'", word);
}

int main() {
    char phrase[] = "(╯°□°)╯︵ ┻━┻ ";

    speak(phrase);
}