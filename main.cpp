#include <iostream>

int main() {
    // 1. Приветствие и идентификация студента
    std::cout << "==========================================" << std::endl;
    std::cout << "  Лабораторная работа №1 по C++" << std::endl;
    std::cout << "  Выполнил: Фамилия Имя Отчество" << std::endl;
    std::cout << "  Группа: XX-XX / ТОГУ" << std::endl;
    std::cout << "==========================================" << std::endl << std::endl;

    // 2. Ввод исходных данных
    long long a = 0;
    long long b = 0;

    std::cout << "Введите первое целое число (A): ";
    std::cin >> a;
    std::cout << "Введите второе целое число (B): ";
    std::cin >> b;

    std::cout << "\n--- РЕЗУЛЬТАТЫ ВЫЧИСЛЕНИЙ ---" << std::endl;

    // 3. Базовые арифметические операции
    std::cout << "A + B = " << (a + b) << std::endl;
    std::cout << "A - B = " << (a - b) << std::endl;
    std::cout << "A * B = " << (a * b) << std::endl;

    // 4. Безопасное деление (защита от сбоя при B == 0)
    if (b != 0) {
        std::cout << "A / B (целочисленное) = " << (a / b) << std::endl;
        std::cout << "A % B (остаток)       = " << (a % b) << std::endl;
    } else {
        std::cout << "ОШИБКА БЕЗОПАСНОСТИ: деление на 0 запрещено!" << std::endl;
    }

    std::cout << "==========================================" << std::endl;
    return 0;
}
