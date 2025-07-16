#include <iostream>
#include <cstring>
#include <cstdlib>

void vulnerable() {
    char dest[10];
    char* src = getenv("USER");  // ← source of untrusted data
    if (src != nullptr) {
        strcpy(dest, src);       // 🚨 Vulnerable: no bounds checking
        std::cout << "Copied username: " << dest << std::endl;
    }
}