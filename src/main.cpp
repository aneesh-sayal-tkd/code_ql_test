#include <iostream>

void vulnerable();  // Declaration from vulnerable.cpp
void greet();       // Declaration from more.cpp

int main() {
    greet();
    vulnerable();
    return 0;
}