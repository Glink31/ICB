#include <iostream>

int main() {
	auto t1 = std::chrono::high_resolution_clock::now();
    int a, b = 1, c = 1;
	std::cin >> a;
	for(int i = 2;i < a;i++){
		b = b + c;
		c = b - c;
	}
	std::cout << "В ряде Фибаначи на позиции " << a << " стоит число " << b << "\n";
	auto t2 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count();
	std::cout << "Time taken to run the program " << duration << " nanoseconds\n";
	return 0
}