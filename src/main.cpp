#include <iostream>
#include <cstring>

void vulnerable_function(char *input) {
    char buffer[10];
    strcpy(buffer, input); // Vulnerability: buffer overflow
    std::cout << "Buffer content: " << buffer << std::endl;
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        vulnerable_function(argv[1]);
    } else {
        std::cout << "Provide an argument." << std::endl;
    }
    return 0;
}