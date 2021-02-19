// Задан треугольник АВС длинами своих сторон a, b, c . Определить его
// биссектрисы. Значения сторон a, b, c ввести с экрана.
// a = (1/(b+c))*sqrt(bc(a+b+c)(b+c-a))
// b = (1/(a+c))*sqrt(ac(a+b+c)(a+c-b))
// c = (1/(a+b))*sqrt(ab(a+b+c)(a+b-c))

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a, b, c, a1, b1, c1;
	
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	
	a1 = (1/(b+c))*(sqrt(b*c*(a+b+c)*(b+c-a)));
	b1 = (1/(a+c))*(sqrt(a*c*(a+b+c)*(a+c-b)));
	c1 = (1/(a+b))*(sqrt(a*b*(a+b+c)*(a+b-c)));
	
	cout << "Биссектриса стороны а: " << a1 << '\n';
	cout << "Биссектриса стороны b: " << b1 << '\n';
	cout << "Биссектриса стороны c: " << c1;
}
