#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int x, y, c, a;
	const int b = 9.5;
	
	cout << "x = ";
	cin >> x;
	
	a = sqrt(abs(x)) + exp(sqrt(b));
	cout << "a = " << a << '\n';
	
	c = log(a) + pow(b, 2);
	cout << "c = " << c << '\n';
	
	y = pow(a, 3) / cos(c);
	cout << "y = " << y << '\n';
}
