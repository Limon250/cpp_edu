/*
Найти 100 первых простых чисел (простое число это натуральное
число, которое имеет ровно два различных натуральных делителя:
единицу и самого себя).
*/

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
