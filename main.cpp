#include "encryptor.h"

int main() {
    std::string rawText = "'Caesar salad' encrypted via Caesar cypher.";
    int key = 54;
    std::string encryptedText = Encryptor::encrypt(rawText, key);
    std::string decryptedText = Encryptor::decrypt(encryptedText, key);
    std::cout << "Raw: " << rawText << "    " << "Key: " << key
              << "\nEncrypted: " << encryptedText << "    Decrypted: " << decryptedText << "\n";

    return 0;
}
