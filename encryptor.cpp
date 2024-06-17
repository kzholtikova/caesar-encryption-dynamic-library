#include <iostream>
#include "encryptor.h"
#define ALPHABET_SIZE 26
#define FIRST_LOWER 'a'
#define FIRST_UPPER 'A'

std::string Encryptor::encrypt(const std::string& rawText, int key) {
    if (key % ALPHABET_SIZE == 0)
        return rawText;

    std::string encrypted;
    for (int i = 0; i < rawText.length(); i++) {
        char ch = rawText[i];
        if (isalpha(ch)) {
            int firstAsciiCode = FIRST_LOWER;
            if (isupper(ch))
                firstAsciiCode = int(FIRST_UPPER);
            encrypted += char((int(ch) - firstAsciiCode + key) % ALPHABET_SIZE + firstAsciiCode);
        } else
            encrypted += ch;
    }
    return encrypted;
}

std::string Encryptor::decrypt(const std::string& encryptedText, int key) {
    if (key % ALPHABET_SIZE == 0)
        return encryptedText;

    key = key % ALPHABET_SIZE;
    std::string decrypted;
    for (int i = 0; i < encryptedText.length(); i++) {
        char ch = encryptedText[i];
        if (isalpha(ch)) {
            int firstAsciiCode = FIRST_LOWER;
            if (isupper(ch))
                firstAsciiCode = int(FIRST_UPPER);
            decrypted += char((int(ch) - firstAsciiCode - key) % ALPHABET_SIZE + firstAsciiCode);
        } else
            decrypted += ch;
    }
    return decrypted;
}
