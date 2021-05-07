# For/While construction

## Powered By Limon250

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)
![License](https://img.shields.io/badge/license-GNU%20V3.0-brightgreen)
![Last Modified](https://img.shields.io/badge/last%20modified-07.05.2021-green)

# Задание №1

>Дано вещественное число ε (> 0). Последовательность вещественных чисел AK определяется следующим образом:
>
>A1 = 2,    AK = 2 + 1/AK−1,    K = 2, 3, … .
>
>Найти первый из номеров K, для которых выполняется условие |AK − AK−1| < ε, и вывести этот номер, а также числа AK−1 и AK.

Код программы

```cpp
#include <iostream>
#include <clocale>
#include <math.h>

using namespace std;

int main()
{
    float Ak = 2;
    float An = 0;
    float E;
    float res1;
    int n = 1;
    cout << "E = "; cin >> E;
    while(fabs(Ak - An) >=E)
    {
        An = Ak;
        res1 =  1.0/An;
        Ak = 2 + 1.0/An;
        ++n;
    }
    cout<< "Ak = " << Ak << endl;
    cout<< "Ak-1 = " << An << endl;
    cout<< "k = " << n << endl;
}

```
![alt text](https://images2.imgbox.com/c8/02/aRYib5a5_o.png)

# Задание №2

![alt text](https://images2.imgbox.com/8b/5c/IUXn7heV_o.png)

Код программы

```cpp
#include <iostream>
#include <clocale>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    int n, k, m;

    cout << "m = "; cin >> m;

    float p;
    float S;
    for (n = -2; n <= m; n++)
    {
        if (n != -1 && n != 0)
        {
            p = 1;
            for (k = 1; k <= n+3; k++)
            {
                if (k != -1 && k != 0)
                {
                    p *= k/(k+1);
                }
            }
        }
    }
    S += (n+1)/n * p;
    cout << "S = " << S << endl;;
    return 0;
}

```

![alt text](https://images2.imgbox.com/44/f8/SkNojQjz_o.png)

# Задание №3

> Написать программу, которая в зависимости от характера ветра выдает
> 
> сообщение о его скорости от 1до 4 м/с - слабый (1); от 5-10 м/c -
> 
> умеренный (2); от 9-18 м/c - сильный (3); больше 19 м/c - ураганный (4).
> 

Код программы
```cpp

```
