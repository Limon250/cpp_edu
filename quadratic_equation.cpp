#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a, b, c, D, x, x1, x2;
	
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	
	D = (b * b) - (4 * a * c);
	cout << "D = " << D << '\n';
	
	if (D > 0){
		x1 = ((-b) + sqrt(D)) / (2 * a);
		x2 = ((-b) - sqrt(D)) / (2 * a);
		
		cout << "x1 = " << x1 << '\n';
		cout << "x2 = " << x2;
	} else if (D == 0){
		x = (-b) / (2 * a);
		
		cout << "x = " << x;
	} else {
		cout << "Нет корней!";
		
		return 0;
	}
}
