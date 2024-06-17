#pragma once
#include <iostream>

class CaesarCipher {
public:

    static std::string encrypt(const std::string& rawText, int key);
    static std::string decrypt(const std::string& encryptedText, int key);
};
