# Caesar Encryption Algorithm Project

## Overview

This project focuses on implementing the Caesar encryption and decryption algorithms using C/C++ within a structured and procedural programming paradigm. The primary objectives are to gain experience in programming, understand compilation and linking processes, and develop both executable files and dynamic-link libraries (DLLs).

## Purpose

- **Programming Practice:** Gain experience in structured and procedural programming paradigms.
- **Encryption/Decryption:** Implement Caesar cipher for message encryption and decryption.
- **Dynamic Libraries:** Learn to create and use dynamic-link libraries.

## Project Structure

### Tasks

1. **Encrypt Function**
   - Create an `encrypt` function to shift characters in a message by a specified key.
   - Prototype: `char* encrypt(char* rawText, int key);`

2. **Decrypt Function**
   - Create a `decrypt` function to reverse the character shift applied by the `encrypt` function.
   - Prototype: `char* decrypt(char* encryptedText, int key);`

3. **Caesar Cipher DLL**
   - Wrap the `encrypt` and `decrypt` functions into a DLL for modular use.
   - Follow the steps to export functions and manage function pointers for DLL usage.

4. **Testing the DLL**
   - Develop a simple command-line interface (CLI) to test the DLL functions.
   - Ensure the user can encrypt and decrypt messages using the CLI.

## Key Concepts

- **Procedural Programming:** Focus on structured code and procedural paradigms.
- **Dynamic Libraries:** Understand DLLs and their advantages for modular programming.
- **Compilation and Linking:** Learn the processes involved in compiling code and linking libraries.

## Resources

- **Programming Languages Principles and Paradigms (PLPP):** Chapters 6, 7
- **Computer Systems: A Programming Perspective (CSAPP):** Chapter 7

## Conclusion

This project provides hands-on experience in implementing and using encryption algorithms, managing dynamic libraries, and understanding the intricacies of structured and procedural programming.
