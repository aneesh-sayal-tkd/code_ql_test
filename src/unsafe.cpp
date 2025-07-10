// unsafe.cpp
#include <iostream>
#include <cstring>

void copy_input(const char* input) {
    char buffer[8];
    strncpy(buffer, input, sizeof(buffer) - 1); // Copy at most 7 characters
    buffer[sizeof(buffer) - 1] = '\0'; // Ensure null-termination
    std::cout << "Buffer contains: " << buffer << std::endl;
}
