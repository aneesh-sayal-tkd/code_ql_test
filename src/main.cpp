#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <mysql/mysql.h>

void vulnerable();  

void login(const char* username, const char* password) {
    MYSQL* conn;
    conn = mysql_init(NULL);

    // Hardcoded credentials
    const char* db_user = "admin";
    const char* db_pass = "password123";

    mysql_real_connect(conn, "localhost", db_user, db_pass, "users_db", 0, NULL, 0);

    // SQL Injection vulnerability
    char query[512];
    sprintf(query, "SELECT * FROM users WHERE username='%s' AND password='%s'", username, password);

    mysql_query(conn, query);
    MYSQL_RES* res = mysql_store_result(conn);

    if (res) {
        std::cout << "Login successful!" << std::endl;
    } else {
        std::cout << "Login failed!" << std::endl;
    }

    mysql_free_result(res);
    mysql_close(conn);
}

void copyName(char* input) {
    char buffer[10];
    strcpy(buffer, input);  // Buffer overflow risk
    std::cout << "Copied name: " << buffer << std::endl;
}

int main() {
    char* name = NULL;

    // Null pointer dereference
    if (strlen(name) > 0) {
        std::cout << "Name length: " << strlen(name) << std::endl;
    }

    // Uninitialized variable usage
    int age;
    if (age > 18) {
        std::cout << "Adult" << std::endl;
    }
char username[50], password[50];

std::cout << "Enter username: ";
fgets(username, sizeof(username), stdin);
username[strcspn(username, "\n")] = '\0';  // Remove newline

std::cout << "Enter password: ";
fgets(password, sizeof(password), stdin);
password[strcspn(password, "\n")] = '\0';  // Remove newline

    login(username, password);
    copyName(username);
       vulnerable();
    return 0;
}
