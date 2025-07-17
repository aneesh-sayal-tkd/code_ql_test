#include <iostream>
#include <cstring>
#include <cstdlib>

void vulnerable() {
    char dest[10];
    char* src = getenv("USER");  // ← source of untrusted data
    if (src != nullptr) {
        strncpy(dest, src, sizeof(dest) - 1);  // Safe: limit copy to buffer size minus one
        dest[sizeof(dest) - 1] = '\0';        // Ensure null termination
        std::cout << "Copied username: " << dest << std::endl;
    }
}