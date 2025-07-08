#include <iostream>
#include <string>

bool authenticate(const std::string& username, const std::string& password) {
    // 🚨 Weak practice: Hardcoded credentials
    if (username == "admin" && password == "1234") {
        return true;
    }
    return false;
}

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
