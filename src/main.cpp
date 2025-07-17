#include <iostream>
#include <cstring>
#include <cstdlib>

void vulnerable();  


void copyInput(char* input) {
    char buffer[8];
    strcpy(buffer, input); // ❌ Potential buffer overflow
    std::cout << "Copied: " << buffer << std::endl;
}

void checkAge() {
    int age; // ❌ Uninitialized variable
    if (age > 18) {
        std::cout << "Adult" << std::endl;
    }
}

void printLength(char* str) {
    // ❌ Null pointer dereference
    if (strlen(str) > 0) {
        std::cout << "Length: " << strlen(str) << std::endl;
    }
}

int main() {
    // ❌ Hardcoded credentials
    const char* username = "admin";
    const char* password = "supersecret123";

    char input[100];

    std::cout << "Enter something: ";
    std::cin >> input;  // ❌ No bounds checking

    copyInput(input);
    checkAge();

    char* name = NULL;
    printLength(name);  // ❌ Dereferencing NULL

      vulnerable();
    return 0;
}
