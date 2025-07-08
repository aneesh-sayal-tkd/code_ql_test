#include <iostream>
#include <cstring>

void vulnerable_function(char *input) {
    char buffer[10];
    strncpy(buffer, input, sizeof(buffer) - 1); // Safe copy with size limit
    buffer[sizeof(buffer) - 1] = '\0'; // Ensure null termination
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