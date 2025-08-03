// main.c
#include <stdio.h>
#include <string.h>
#include "encoder.h"

int main() {
    char input[200];
    int choice;

    printf("Welcome to Cryptonix\n");
    printf("1. Encode\n");
    printf("2. Decode\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter text (no spaces): ");
    scanf("%s", input);

    if (choice == 1) {
        printf("Encoded: ");
        encode_text(input);
    } else if (choice == 2) {
        printf("Decoded: ");
        decode_text(input);
    } else {
        printf("Invalid choice.\n");
    }

    printf("\n");
    return 0;
}
