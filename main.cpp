#include "encryptor.h"

int main() {
    std::string rawText = "'Caesar salad' encrypted via Caesar cypher.";
    int key = 25;
    std::string encryptedText = Encryptor::encrypt(rawText, key);
    std::cout << "Raw: " << rawText << "    " << "Key: " << key
              << "\nEncrypted: " << encryptedText << "\n";

    return 0;
}
