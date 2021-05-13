# Massives

## Powered By Limon250

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)

# Задание №1

> Ввести массив, состоящий из 12 элементов действительного типа. Опре-
> делить границы интервала, в котором находятся значения элементов
> массива.

Код программы

```cpp
#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_CTYPE, "rus");
    float array[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0,10.0, 11.0, 12.0};
    const int arrayLength = sizeof(array) / sizeof(array[0]);
    for (int index=0; index < arrayLength; ++index)
    {
        std::cout << array[index] << " ";
    }
        std::cout << std::endl;
        std::cout << "Нижняя граница массива: " << array[0] << " " << std::endl;
        std::cout << "Верхняя граница массива: " << array[11] << " " << std::endl;
    return 0;
}

```
Вывод программы

![alt text](https://images2.imgbox.com/3f/7b/Ju3a6ay7_o.png)

# Задание №2

> Определить количество локальных максимумов в заданном числовом
> массиве. (Локальный максимум в числовом массиве – это последователь-
> ность трех рядом стоящих чисел, в которой среднее число больше стоя-
> щих слева и справа от него).


Код программы

```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>

using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    const int size = 10;
    int n[size], count = 0;
    srand(unsigned(time(NULL)));
    for (int i = 0; i < size; i++)
    {
        n[i] = rand() % 99 + 1;
        cout << n[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        if (i == 0 && n[i] < n[i+1]) count++;
        else if (i > 0 && i < size-1 && n[i] < n[i-1] && n[i] < n[i+1]) count++;
        else if (i == size-1 && n[i] < n[i-1]) count++;
    }
    cout << "Количество локальных минимумов: " << count << endl;

    return 0;
}

```

Вывод программы

![alt text](https://images2.imgbox.com/d2/1f/gC3oEwUV_o.png)
