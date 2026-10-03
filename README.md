# arraylib

Кроссплатформенная динамическая библиотека операций над массивами int (C++17, CMake).

## Функции
arr_sum, arr_max, arr_min, arr_average, arr_count_positive,
arr_count_negative, arr_count_zero, arr_product, arr_median.

## Сборка
```
cmake -S . -B build
cmake --build build -j
```

## Тесты
```
ctest --test-dir build --output-on-failure
```

## Пример по варианту 4
```
./build/variant_04
```
Тесты: unit и integration, запускаются через CTest.
