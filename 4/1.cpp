/*
Ввести массив, состоящий из 12 элементов действительного типа. Опре-
делить границы интервала, в котором находятся значения элементов
массива.
*/

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
        std::cout << std::endl;
    }
        std::cout << "Нижняя граница массива: " << array[0] << " " << std::endl;
        std::cout << "Верхняя граница массива: " << array[11] << " " << std::endl;
    return 0;
}
