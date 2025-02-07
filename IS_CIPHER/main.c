#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cipher.h"

void clearNewline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0'; // Remove newline character
    }
}

int main() {
    char text[100], key[100];
    char substitutionKey[27]; // Must be exactly 26 letters
    int choice, shift, encrypt;
    char xorKey;

    do {
        printf("\n===== Cipher Test Menu =====\n");
        printf("1. Caesar Cipher\n");
        printf("2. Atbash Cipher\n");
        printf("3. Substitution Cipher\n");
        printf("4. XOR Cipher\n");
        printf("5. Vigenère Cipher\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume leftover newline

        switch (choice) {
            case 1:  // Caesar Cipher
                printf("Enter text: ");
                fgets(text, sizeof(text), stdin);
                clearNewline(text);

                printf("Enter shift value: ");
                scanf("%d", &shift);
                getchar(); // Consume leftover newline

                caesarCipher(text, shift);
                printf("Encrypted/Decrypted text: %s\n", text);
                break;

            case 2:  // Atbash Cipher
                printf("Enter text: ");
                fgets(text, sizeof(text), stdin);
                clearNewline(text);

                atbashCipher(text);
                printf("Encrypted text: %s\n", text);
                break;

            case 3:  // Substitution Cipher
                printf("Enter text: ");
                fgets(text, sizeof(text), stdin);
                clearNewline(text);

                printf("Enter substitution key (26 letters): ");
                fgets(substitutionKey, sizeof(substitutionKey), stdin);
                clearNewline(substitutionKey);

                substitutionCipher(text, substitutionKey);
                printf("Encrypted text: %s\n", text);
                break;

            case 4:  // XOR Cipher
                printf("Enter text: ");
                fgets(text, sizeof(text), stdin);
                clearNewline(text);

                printf("Enter XOR key (single char): ");
                scanf(" %c", &xorKey);
                getchar(); // Consume leftover newline

                xorCipher(text, xorKey);
                printf("Encrypted/Decrypted text: %s\n", text);
                break;

            case 5:  // Vigenère Cipher (Encrypt or Decrypt)
                printf("Enter text: ");
                fgets(text, sizeof(text), stdin);
                clearNewline(text);

                printf("Enter key: ");
                fgets(key, sizeof(key), stdin);
                clearNewline(key);

                printf("Choose mode (1 for Encrypt, 0 for Decrypt): ");
                scanf("%d", &encrypt);
                getchar(); // Consume leftover newline

                vigenereCipher(text, key, encrypt);
                printf("Result: %s\n", text);
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice, try again.\n");
        }

    } while (choice != 0);

    return 0;
}

