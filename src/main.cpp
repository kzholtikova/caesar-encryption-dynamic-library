#include "../include/caesar_cipher.h"

int main() {
    std::string rawText;
    std::cout << "Enter the text to encrypt: ";
    std::getline(std::cin, rawText);

    int key;
    std::cout << "Enter the encryption key: ";
    std::cin >> key;

    std::string encryptedText = CaesarCipher::encrypt(rawText, key);
    std::string decryptedText = CaesarCipher::decrypt(encryptedText, key);
    std::cout << "Raw: " << rawText << "    " << "Key: " << key
              << "\nEncrypted: " << encryptedText << "    Decrypted: " << decryptedText << "\n";

    return 0;
}
