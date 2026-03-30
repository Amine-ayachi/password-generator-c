#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char password[100];
    int length;
    int i;
    int index;

    printf("Enter password length: ");
    scanf("%d", &length);

    while (length <= 0 || length >= 100) {
        printf("Invalid length. Enter a number between 1 and 99: ");
        scanf("%d", &length);
    }

    srand(time(NULL));

    for (i = 0; i < length; i++) {
        index = rand() % 62;
        password[i] = characters[index];
    }

    password[length] = '\0';

    printf("Generated password: %s\n", password);

    return 0;
}