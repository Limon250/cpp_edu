// С начала суток прошло N секунд (N — целое). Найти количество
// полных минут, прошедших с начала суток.
//

#include <iostream>

using namespace std;

int main(){
	int N, h;
	
	cout << "Кол-во секунд: ";
	cin >> N;
	
	h = N / 60;
	cout << "Кол-во полных минут: " << h << '\n';
}
