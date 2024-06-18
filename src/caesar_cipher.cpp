#include <cstdlib>
#include <cstring>
#include <cctype>
#include "../include/caesar_cipher.h"
#define ALPHABET_SIZE 26
#define FIRST_LOWER 'a'
#define FIRST_UPPER 'A'

char* encrypt(const char* rawText, int key) {
    if (key % ALPHABET_SIZE == 0)
        return (char*)rawText;

    key = (key % ALPHABET_SIZE + ALPHABET_SIZE);
    char* encrypted = (char*)malloc(strlen(rawText) + 1);
    for (int i = 0; i < strlen(rawText); i++) {
        char ch = rawText[i];
        if (isalpha(ch)) {
            int firstAsciiCode = isupper(ch) ? FIRST_UPPER : FIRST_LOWER;
            encrypted[i] = (char)((ch - firstAsciiCode + key) % ALPHABET_SIZE + firstAsciiCode);
        } else
            encrypted[i] = ch;
    }
    encrypted[strlen(rawText)] = '\0';
    return encrypted;
}

char* decrypt(const char* encryptedText, int key) {
    return encrypt(encryptedText, -key);
}
