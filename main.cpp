#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "rus");
    std::string name;

    std::cout << "Введите ваше имя: ";
    std::getline(std::cin, name);

    std::cout << "Привет, " << name << "!" << std::endl;
}
