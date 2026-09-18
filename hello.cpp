#include <iostream>
#include <string>

// Функция печати персонализированного сообщения с обработкой значения по умолчанию
void printGreeting(const std::string& name = "World") {
    if (name.empty()) {
        std::cout << "Hello, World!" << std::endl;
    } else {
        std::cout << "Hello, " << name << "!" << std::endl;
    }
}

int main() {
    const std::string targetUser = "Team";
    printGreeting(targetUser);
    return 0;
}
