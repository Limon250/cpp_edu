/*
Составьте программу, суммирующую штрафное время команд при игре
в хоккей. Выводить на экран суммарное штрафное время обеих команд
после любого его изменения. После окончания игры выдать итоговое
сообщение.
*/

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
