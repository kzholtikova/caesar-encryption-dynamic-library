#pragma once
#include <iostream>

class Encryptor {
public:
    static std::string encrypt(const std::string& rawText, int key);
};
