/*
��������� ���������, ����������� �������� ����� ������ ��� ����
� ������. �������� �� ����� ��������� �������� ����� ����� ������
����� ������ ��� ���������. ����� ��������� ���� ������ ��������
���������.
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
        cout << "������� 1: " << endl;
        cout << "�����: " << endl;

        cin >> v;

        cout << "������� 2: " << endl;
        cout << "�����: " << endl;

        cin >> v1;

        s = v + v1;

        cout << "����� �������� �����: " << s << endl;
        return 0;
    }
}
