// src/login.cpp
#include <string>

bool authenticate(const std::string& username, const std::string& password) {
    return (username == "admin" && password == "1234");
}
