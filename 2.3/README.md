# Switch{} construction

## Powered By Limon250

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)

# Задание №1

> Даны координаты точки B(x,y). Определить, лежит ли данная точка на кривой
> 
> y= {x^2 ; если |x|<=2
> 
>    {4; если |x|>2
>     
>    eps=10^-3

Код программы

```cpp
#include <iostream>
#include <math.h>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    int count;
    const double eps = pow(10, -3);

    cout << "Введите значение x и y: " << endl;
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
                    cout << "Лежит" << endl;
                    break;
                }
                else
                {
                    cout << "Не лежит" << endl;
                    break;
                }
            }
            else if (abs(x) > 2)
            {
                func = 4;
                if (abs(func - y) < eps)
                {
                    cout << "Лежит" << endl;
                    break;
                }
                else
                {
                    cout << "Не лежит" << endl;
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
                    cout << "Лежит" << endl;
                    break;
                }
                else
                {
                    cout << "Не лежит" << endl;
                    break;
                }
            }
            else if (abs(x) > 2)
            {
                func = 4;
                if (abs(func - y) < eps)
                {
                    cout << "Лежит" << endl;
                    break;
                }
                else
                {
                    cout << "Не лежит" << endl;
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
                    cout << "Лежит" << endl;
                    break;
                }
                else
                {
                    cout << "Не лежит" << endl;
                    break;
                }
            }
            else if (abs(x) > 2)
            {
                func = 4;
                if (abs(func - y) < eps)
                {
                    cout << "Лежит" << endl;
                    break;
                }
                else
                {
                    cout << "Не лежит" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

```
![alt text](https://images2.imgbox.com/f0/52/fm5rQuDr_o.png)
![alt text](https://images2.imgbox.com/c6/25/hDHgu7go_o.png)
![alt text](https://images2.imgbox.com/50/12/zfdwvHRl_o.png)

# Задание №2

> y =
> 
> 1 -> (3.5a - 7.3bx + sin(zx))^3 , if x < -ln|a|     
> 
> 2 -> a^b - cos^3(a+zx), if -ln|a| <= x < b          2.a=3 b=6 z=e^1.5x
> 
> 3 -> sqrt(|tg a - x|) - x^2, if x > b               3.a=2.7 b=1.8 z = e^1.5x

Код программы

```cpp
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
```
![alt text](https://images2.imgbox.com/b9/d9/MYlmLJ2L_o.png)
![alt text](https://images2.imgbox.com/ef/85/nek8DssL_o.png)
![alt text](https://images2.imgbox.com/da/1e/GhZIYkw2_o.png)

# Задание №3

> Написать программу, которая в зависимости от характера ветра выдает
> 
> сообщение о его скорости от 1до 4 м/с - слабый (1); от 5-10 м/c -
> 
> умеренный (2); от 9-18 м/c - сильный (3); больше 19 м/c - ураганный (4).
> 

Код программы
```cpp
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
```
![alt text](https://images2.imgbox.com/6a/a7/YXhhbF44_o.png)
![alt text](https://images2.imgbox.com/b1/d3/iII8dlwA_o.png)
![alt text](https://images2.imgbox.com/5b/a8/TLKU9vR6_o.png)
![alt text](https://images2.imgbox.com/ee/fb/X0EuHZTa_o.png)
