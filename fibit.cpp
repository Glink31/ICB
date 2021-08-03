#include <iostream>

int main() {
    int a, b = 1, c = 1;
	std::cin >> a;
	for(int i = 2;i < a;i++){
		b = b + c;
		c = b - c;
	}
	std::cout << "В ряде Фибаначи на позиции " << a << " стоит число " << b;
	return 0
}