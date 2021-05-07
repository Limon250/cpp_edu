/*
Дано вещественное число ε (> 0). Последовательность вещественных чисел AK определяется следующим образом:
                                                            A1 = 2,    AK = 2 + 1/AK−1,    K = 2, 3, … .

Найти первый из номеров K, для которых выполняется условие |AK − AK−1| < ε, и вывести этот номер, а также числа AK−1 и AK.
*/

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
