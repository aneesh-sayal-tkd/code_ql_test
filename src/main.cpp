// main.cpp
#include <iostream>

extern void copy_input(const char*);

int main(int argc, char* argv[]) {
    if (argc > 1) {
        copy_input(argv[1]);
    } else {
        std::cout << "Please provide an argument." << std::endl;
    }
    return 0;
}
