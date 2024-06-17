#include <stdio.h>
#include <dlfcn.h>
#include <cstdlib>

char* readInput() {
    size_t bufsize = 1024; // Initial buffer size
    char* buffer = (char*)malloc(bufsize * sizeof(char));
    size_t length = 0;
    int c;

    while ((c = fgetc(stdin)) != EOF && c != '\n') {
        buffer[length++] = (char)c;
        if (length >= bufsize - 1) { // Resize buffer if needed
            bufsize *= 2;
            buffer = (char*)realloc(buffer, bufsize * sizeof(char));
        }
    }

    buffer[length] = '\0';
    return buffer;
}

int main() {
    void* handle = dlopen("./build/libcaesar_cipher.so", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "Error loading library: %s\n", dlerror());
        return 1;
    }

    char* (*encrypt)(const char*, int);
    encrypt = (char* (*)(const char*, int))dlsym(handle, "encrypt");
    char* (*decrypt)(const char*, int);
    decrypt = (char* (*)(const char*, int))dlsym(handle, "decrypt");
    if (!encrypt || !decrypt) {
        fprintf(stderr, "Error loading symbols: %s\n", dlerror());
        return 1;
    }

    printf("%s", "Enter the text to encrypt: ");
    char* rawText = readInput();

    printf("%s", "Enter the encryption key: ");
    int key;
    if (!rawText || !scanf("%d", &key)) {
        printf("Invalid input.");
        return -1;
    }

    char* encryptedText = encrypt(rawText, key);
    char* decryptedText = decrypt(encryptedText, key);
    printf("Raw: %s    Key: %d\n"
           "Encrypted: %s    Decrypted: %s\n", rawText, key, encryptedText, decryptedText);

    dlclose(handle);
    return 0;
}
