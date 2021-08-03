#include <iostream>
#include <chrono>

int fib(int n){
	if (n == 1 || n == 2){
		return 1;
	}else{
		return fib(n-1)+fib(n-2);
	}
}

int main() {
	auto t1 = std::chrono::high_resolution_clock::now();
    int a,b;
	std::cin >> a;
	b = fib(a);
	std::cout << "В ряде Фибаначи на позиции " << a << " стоит число " << b << "\n";
	auto t2 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count();
	std::cout << "Time taken to run the program " << duration << " nanoseconds\n";
	return 0;
}