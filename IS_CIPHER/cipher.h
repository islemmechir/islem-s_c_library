#ifndef CIPHER_H
#define CIPHER_H

// Function prototypes
void caesarCipher(char *text, int shift);
void atbashCipher(char *text);
void substitutionCipher(char *text, const char *key);
void xorCipher(char *text, char key);
void vigenereCipher(char* text, const char* key, int encrypt);

#endif

