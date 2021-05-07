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
