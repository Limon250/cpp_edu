/*
Написать программу, которая в зависимости от характера ветра выдает
сообщение о его скорости от 1до 4 м/с - слабый (1); от 5-10 м/c -
умеренный (2); от 9-18 м/c - сильный (3); больше 19 м/c - ураганный (4).
*/

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    int har, count;

    cout << "1: от 1 до 4 м\с" << endl;
    cout << "2: от 5 до 10 м\с" << endl;
    cout << "3: от 9 до 18 м\с" << endl;
    cout << "4: больше 19 м\с" << endl;

    cout << "Введите скорость ветра: " << endl;
    cin >> count;

    if ((count >= 1) && (count <= 4))
    {
        switch(count)
        {
            case 1:
            {
                cout << "Характер ветра: слабый" << endl;
                break;
            }
            case 2:
            {
                cout << "Характер ветра: умеренный" << endl;
                break;
            }
            case 3:
            {
                cout << "Характер ветра: сильный" << endl;
                break;
            }
            case 4:
            {
                cout << "Характер ветра: ураганный" << endl;
                break;
            }
        }
    }
    else
    {
        system("pause");
    }
    return 0;
}
