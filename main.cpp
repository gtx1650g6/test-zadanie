#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "rus");
    std::string name;

    std::cout << "������� ���� ���: ";
    std::getline(std::cin, name);

    std::cout << "������, " << name << "!" << std::endl;
}
