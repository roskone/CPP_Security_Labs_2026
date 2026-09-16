#include <iostream>

int main() {
    std::cout << "==========================================" << std::endl;
    std::cout << "  Лабораторная работа №1 по C++" << std::endl;
    std::cout << "  Выполнили: Гаврющенко, Шепелев" << std::endl;
    std::cout << "  Группа: КБПс-61 / ТОГУ" << std::endl;
    std::cout << "==========================================" << std::endl << std::endl;

    long long a = 0;
    long long b = 0;

    std::cout << "Введите первое целое число (A): ";
    std::cin >> a;
    std::cout << "Введите второе целое число (B): ";
    std::cin >> b;

    std::cout << "\n--- РЕЗУЛЬТАТЫ ВЫЧИСЛЕНИЙ ---" << std::endl;


    std::cout << "A + B = " << (a + b) << std::endl;
    std::cout << "A - B = " << (a - b) << std::endl;
    std::cout << "A * B = " << (a * b) << std::endl;


    if (b != 0) {
        std::cout << "A / B (целочисленное) = " << (a / b) << std::endl;
        std::cout << "A % B (остаток)       = " << (a % b) << std::endl;
    } else {
        std::cout << "ОШИБКА БЕЗОПАСНОСТИ: деление на 0 запрещено!" << std::endl;
    }

    std::cout << "==========================================" << std::endl;
    return 0;
}
