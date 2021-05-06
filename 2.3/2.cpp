/*
y =
1) (3.5a - 7.3bx + sin(zx))^3 , if x < -ln|a|      1.a=6 b=3.2 z = e^1.5ax
2) a^b - cos^3(a+zx), if -ln|a| <= x < b            2.a=3 b=6 z=e^1.5x
3) sqrt(|tg a - x|) - x^2, if x > b                     3.a=2.7 b=1.8 z = e^1.5x
*/

#include <iostream>
#include <math.h>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    int count;
    float x;

    cout << "Введите значение переменной x: " << endl;
    cin >> x;

    cout << "Введите значения a, b, z: " << endl;
    cout << "1: a=6, b=3.2, z=e^1.5x" << endl;
    cout << "2: a=3 b=6 z=e^1.5x" << endl;
    cout << "3: a=2.7 b=1.8 z=e^1.5x" << endl;
    cin >> count;

    if ((count >= 1) && (count <=3))
    {
        switch(count)
        {
            case 1:
            {
                const float a = 6;
                const float b =3.2;
                const float z = exp(1.5 * a * x);
                float y;

                if (x < -log10(a))
                {
                    y = pow((3.5 * a - 7.3 * b * x + sin(z * x)), 3);
                    cout << "y = " << y;
                    break;
                }
                else if ((-log10(a) <= x) && (x < b))
                {
                    y = pow(a, b) - pow(cos(a + z * x),3);
                    cout << "y = " << y;
                    break;
                }
                else
                {
                    y = sqrt(abs(tan(a) - x)) - pow(x,2);
                    cout << "y = " << y;
                    break;
                }
            }
            case 2:
            {
                const float a = 3;
                const float b =6;
                const float z = exp(1.5 * a * x);
                float y;

                if (x < -log10(a))
                {
                    y = pow((3.5 * a - 7.3 * b * x + sin(z * x)),3);
                    cout << "y = " << y;
                    break;
                }
                else if ((-log10(a) <= x) && (x < b))
                {
                    y = pow(a, b) - pow(cos(a + z * x),3);
                    cout << "y = " << y;
                    break;
                }
                else
                {
                    y = sqrt(abs(tan(a) - x)) - pow(x,2);
                    cout << "y = " << y;
                    break;
                }
            }
            case 3:
            {
                const float a = 2.7;
                const float b = 1.8;
                const float z = exp(1.5 * a * x);
                float y;

                if (x < -log10(a))
                {
                    y = pow((3.5 * a - 7.3 * b * x + sin(z * x)),3);
                    cout << "y = " << y;
                    break;
                }
                else if ((-log10(a) <= x) && (x < b))
                {
                    y = pow(a, b) - pow(cos(a + z * x),3);
                    cout << "y = " << y;
                    break;
                }
                else
                {
                    y = sqrt(abs(tan(a) - x)) - pow(x,2);
                    cout << "y = " << y;
                    break;
                }
            }
        }
    }
    else
    {
        system("pause");
    }

    return 0;
}
