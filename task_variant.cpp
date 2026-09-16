// Вариант 4: решение квадратного уравнения ax^2 + bx + c = 0 (a != 0)
#include <iostream>
#include <cmath>   // std::sqrt

int main() {
    std::cout << "Решение квадратного уравнения a*x^2 + b*x + c = 0" << std::endl;

    // 1. Ввод коэффициентов
    double a = 0.0, b = 0.0, c = 0.0;
    std::cout << "Введите коэффициент a: ";
    std::cin >> a;
    std::cout << "Введите коэффициент b: ";
    std::cin >> b;
    std::cout << "Введите коэффициент c: ";
    std::cin >> c;

    // 2. Проверка условия a != 0 (иначе уравнение не квадратное)
    if (a == 0.0) {
        std::cout << "ОШИБКА: коэффициент a не должен быть равен 0!" << std::endl;
        return 1;
    }

    // 3. Дискриминант D = b^2 - 4ac
    const double d = b * b - 4.0 * a * c;
    std::cout << "Дискриминант D = " << d << std::endl;

    // 4. Анализ дискриминанта и вывод корней
    if (d < 0.0) {
        std::cout << "D < 0: действительных корней нет." << std::endl;
    } else if (d == 0.0) {
        const double x = -b / (2.0 * a);
        std::cout << "D = 0: один корень x = " << x << std::endl;
    } else {
        const double sqrt_d = std::sqrt(d);
        const double x1 = (-b + sqrt_d) / (2.0 * a);
        const double x2 = (-b - sqrt_d) / (2.0 * a);
        std::cout << "D > 0: два корня" << std::endl;
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }

    return 0;
}
