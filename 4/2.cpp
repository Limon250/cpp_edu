/*
Определить количество локальных максимумов в заданном числовом
массиве. (Локальный максимум в числовом массиве – это последователь-
ность трех рядом стоящих чисел, в которой среднее число больше стоя-
щих слева и справа от него).
*/

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
