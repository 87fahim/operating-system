#include <stdio.h>

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    int i;
    for(i = 0; input[i] != '\0'; i++) {
        printf("you Entered here: %c", input[i]);
    }
    return 0;
}
