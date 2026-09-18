#include <iostream>
#include <string>

// Функция печати персонализированного сообщения
void printGreeting(const std::string& name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}

int main() {
    printGreeting("Team");
    return 0;
}
