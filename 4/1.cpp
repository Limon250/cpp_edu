/*
������ ������, ��������� �� 12 ��������� ��������������� ����. ����-
������ ������� ���������, � ������� ��������� �������� ���������
�������.
*/

#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_CTYPE, "rus");
    float array[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0,10.0, 11.0, 12.0};
    const int arrayLength = sizeof(array) / sizeof(array[0]);
    for (int index=0; index < arrayLength; ++index)
    {
        std::cout << array[index] << " ";
        std::cout << std::endl;
    }
        std::cout << "������ ������� �������: " << array[0] << " " << std::endl;
        std::cout << "������� ������� �������: " << array[11] << " " << std::endl;
    return 0;
}
