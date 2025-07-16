#include <iostream>
#include <cstring>

void vulnerableFunction() {
    char buffer[10];
    std::cout << "Enter your name: ";
    std::cin >> buffer; // 🚨 Potential buffer overflow (unsafe input into fixed buffer)

    char dest[10];
    char *src = getenv("USER"); // Using environment variable (could be long)
    if (src != nullptr) {
        strcpy(dest, src); // 🚨 Unsafe function, no bounds checking (possible overflow)
    }

    std::cout << "Hello, " << buffer << std::endl;
}

int main() {
    vulnerableFunction();
    return 0;
}
