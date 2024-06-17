#include "encryptor.h"

int main() {
    std::string rawText;
    std::cout << "Enter the text to encrypt: ";
    std::getline(std::cin, rawText);

    int key;
    std::cout << "Enter the encryption key: ";
    std::cin >> key;

    std::string encryptedText = Encryptor::encrypt(rawText, key);
    std::string decryptedText = Encryptor::decrypt(encryptedText, key);
    std::cout << "Raw: " << rawText << "    " << "Key: " << key
              << "\nEncrypted: " << encryptedText << "    Decrypted: " << decryptedText << "\n";

    return 0;
}
