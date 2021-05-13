/*
Задан случайный массив. Определить разность между суммой значений элементов
массива на участках, где элементы монотонно возрастают(каждое следующее число больше
предыдущего) и суммой значений элементов массива на участках, где элементы монотонно убывают
(каждое следующее число меньше предыдущего).
*/

#include <iostream>
#include <clocale>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    int size, b, inc = 0, dec = 0; bool flag = true;
    cout << "Введите размер массива: " << endl;
    cin >> size;
    int n[size], count = 0;
    srand(unsigned(time(NULL)));
    for (int i = 0; i < size; i++)
    {
        n[i] = rand() % 99 + 1;
        cout << n[i] << ' ';
    }
    for (int i = 0; i < size; i++)
    {
        if (n[i-1] < n[i])
        {
            if (flag)
            {
                inc += n[i-1];
                flag = false;
            }
            inc += n[i];
        }else if (n[i-1] > n[i])
        {
            if (!flag)
            {
                dec += n[i-1];
                flag = true;
            }
            dec += n[i];
        }
    }
    cout << endl;
    b = inc-dec;
    cout << "разность между суммой значений элементов массива на участках и суммой значений элементов " <<
    "массива на участках, где элементы монотонно убывают: " << endl;
    cout << b << endl;
    return 0;
}
