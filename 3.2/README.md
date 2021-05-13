# For() with condition 

## Powered By Limon250

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)

# Задание №1

> Составьте программу, суммирующую штрафное время команд при игре
> в хоккей. Выводить на экран суммарное штрафное время обеих команд
> после любого его изменения. После окончания игры выдать итоговое
> сообщение.

Код программы

```cpp
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    int k, s, v, v1 = 0, v2 = 0, i;
    for (i=0; i <= 2; i++)
    {
        int s = 0;
        cout << "Команда 1: " << endl;
        cout << "Штраф: " << endl;

        cin >> v;

        cout << "Команда 2: " << endl;
        cout << "Штраф: " << endl;

        cin >> v1;

        s = v + v1;

        cout << "Общее штрафное время: " << s << endl;
        return 0;
    }
}

```
Вывод программы

![alt text](https://images2.imgbox.com/c1/ce/dSKWBQ7u_o.png)

# Задание №2

> У студента имеются накопления S грн. Ежемесячная стипендия составля-
> ет А рублей, а расходы на проживание превышают ее и составляют B грн.
> в месяц Рост цен ежемесячно увеличивает расходы на 3%. Определить,
> сколько месяцев сможет прожить студент, используя только накопления и
> стипендию


Код программы

```cpp
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    int i; float a, s, b;

    cout << "Накопления: " << endl;
    cin >> s;
    cout << "Степендия: " << endl;
    cin >> a;
    cout << "Расход: " << endl;
    cin >> b;

    while (s > 0)
    {
        s = s+a-b;
        b = b*3/100+b;
        i++;
    }
    cout << "Студент проживёт " << i << " " << "месяца(-ев)" << endl;
    return 0;
}

```

Вывод программы

![alt text](https://images2.imgbox.com/76/6a/IEz8oR7X_o.png)
