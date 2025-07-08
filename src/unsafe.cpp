// unsafe.cpp
#include <iostream>
#include <cstring>

void copy_input(const char* input) {
    char buffer[8];
    strcpy(buffer, input); // 🚨 Buffer overflow
    std::cout << "Buffer contains: " << buffer << std::endl;
}
