/*
�������� ���������, ������� � ����������� �� ��������� ����� ������
��������� � ��� �������� �� 1�� 4 �/� - ������ (1); �� 5-10 �/c -
��������� (2); �� 9-18 �/c - ������� (3); ������ 19 �/c - ��������� (4).
*/

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    int har, count;

    cout << "1: �� 1 �� 4 �\�" << endl;
    cout << "2: �� 5 �� 10 �\�" << endl;
    cout << "3: �� 9 �� 18 �\�" << endl;
    cout << "4: ������ 19 �\�" << endl;

    cout << "������� �������� �����: " << endl;
    cin >> count;

    if ((count >= 1) && (count <= 4))
    {
        switch(count)
        {
            case 1:
            {
                cout << "�������� �����: ������" << endl;
                break;
            }
            case 2:
            {
                cout << "�������� �����: ���������" << endl;
                break;
            }
            case 3:
            {
                cout << "�������� �����: �������" << endl;
                break;
            }
            case 4:
            {
                cout << "�������� �����: ���������" << endl;
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
