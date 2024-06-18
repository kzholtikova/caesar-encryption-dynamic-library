#pragma once

extern "C" {
    char* encrypt(const char* rawText, int key);
    char* decrypt(const char* encryptedText, int key);
};
