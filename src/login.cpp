#include <string>
#include <cstring>

const char* ADMIN_USERNAME = "admin";  // 👈 const global
const char* ADMIN_PASSWORD = "1234";  // 👈 const global (more detectable)

bool authenticate(const std::string& username, const std::string& password) {
    return (username == ADMIN_USERNAME && password == ADMIN_PASSWORD);
}