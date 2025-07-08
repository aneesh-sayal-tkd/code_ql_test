// src/main.cpp
#include <iostream>
#include <string>

extern bool authenticate(const std::string&, const std::string&);

int main() {
    std::string username, password;
    std::cout << "Username: ";
    std::cin >> username;
    std::cout << "Password: ";
    std::cin >> password;

    if (authenticate(username, password)) {
        std::cout << "Login successful!" << std::endl;
    } else {
        std::cout << "Login failed!" << std::endl;
    }
    return 0;
}
