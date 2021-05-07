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

> Найти 100 первых простых чисел (простое число это натуральное
> число, которое имеет ровно два различных натуральных делителя:
> единицу и самого себя)

Код программы
```cpp
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    int i,j;

    for (i=1; i<100; i++)
    {
        int kol=0;
        for (j=1; j<=i; j++)
            if (i%j==0) kol++;
        if (kol==1 || kol==2) cout << i << endl;
    }
    cout << "\n";
    system("pause");
    return 0;
}

```

![alt text](https://images2.imgbox.com/d5/7e/u1Y43QE1_o.png)
