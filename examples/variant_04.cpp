#include "arraylib.h"
#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    int times[] = {
        248, 261, 239, 275, 252,
        244, 268, 231, 257, 249
    };
    const std::size_t n = sizeof(times) / sizeof(times[0]);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Время прохождения дистанции (сек): ";
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << times[i] << ' ';
    }
    std::cout << "\nКоличество спортсменов: " << n << "\n\n";

    // Меньшее время = лучший результат
    std::cout << "Лучшее время:  " << arr_min(times, n) << " с\n";
    std::cout << "Худшее время:  " << arr_max(times, n) << " с\n";
    std::cout << "Среднее время: " << arr_average(times, n) << " с\n";
    std::cout << "Медиана:       " << arr_median(times, n) << " с\n";

    // Такой функции в библиотеке нет, считаем циклом
    int fast = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (times[i] < 250) {
            ++fast;
        }
    }
    std::cout << "Быстрее 250 секунд: " << fast << " результатов\n";

    return 0;
}