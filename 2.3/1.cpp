/* Даны координаты точки B(x,y). Определить,
лежит ли данная точка на кривой
y= {x^2 ; если |x|<=2
   {4; если |x|>2
   eps=10^-3
*/

#include <iostream>
#include <math.h>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    int count;
    const double eps = pow(10, -3);

    cout << "Ââåäèòå çíà÷åíèå x è y: " << endl;
    cout << "1: x = 5, y = 4" << endl;
    cout << "2: x = 1, y = 6" << endl;
    cout << "3: x = 1, y = 1" << endl;
    cin >> count;

    switch (count)
    {
        case 1:
        {
            const int x = 5; const int y = 4;
            double func;
            if (abs(x) <= 2)
            {
                func = pow(x, 2);
                if (abs(func - y) < eps)
                {
                    cout << "Ëåæèò" << endl;
                    break;
                }
                else
                {
                    cout << "Íå ëåæèò" << endl;
                    break;
                }
            }
            else if (abs(x) > 2)
            {
                func = 4;
                if (abs(func - y) < eps)
                {
                    cout << "Ëåæèò" << endl;
                    break;
                }
                else
                {
                    cout << "Íå ëåæèò" << endl;
                    break;
                }
            }
        }
        case 2:
        {
            const int x = 1; const int y = 6;
            double func;
            if (abs(x) <= 2)
            {
                func = pow(x, 2);
                if (abs(func - y) < eps)
                {
                    cout << "Ëåæèò" << endl;
                    break;
                }
                else
                {
                    cout << "Íå ëåæèò" << endl;
                    break;
                }
            }
            else if (abs(x) > 2)
            {
                func = 4;
                if (abs(func - y) < eps)
                {
                    cout << "Ëåæèò" << endl;
                    break;
                }
                else
                {
                    cout << "Íå ëåæèò" << endl;
                    break;
                }
            }
        }
        case 3:
        {
            const int x = 1; const int y = 1;
            double func;
            if (abs(x) <= 2)
            {
                func = pow(x, 2);
                if (abs(func - y) < eps)
                {
                    cout << "Ëåæèò" << endl;
                    break;
                }
                else
                {
                    cout << "Íå ëåæèò" << endl;
                    break;
                }
            }
            else if (abs(x) > 2)
            {
                func = 4;
                if (abs(func - y) < eps)
                {
                    cout << "Ëåæèò" << endl;
                    break;
                }
                else
                {
                    cout << "Íå ëåæèò" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
