#include <stdio.h>

int main() {
    char response;

    // Ask the user for input
    printf("Do you agree? (y/n): ");
    scanf(" %c", &response); // Note the space before %c to consume any whitespace characters

    // Check the user's response and print a message
    if (response == 'y' || response == 'Y') {
        printf("You agreed!\n");
    } else if (response == 'n' || response == 'N') {
        printf("You disagreed!\n");
    } else {
        printf("Invalid response!\n");
    }

    return 0;
}
