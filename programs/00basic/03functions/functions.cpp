#include <iostream>

void PrintHelloWorld() {
	std::cout << "Hello world!\n";
}

int addTwoIntegers(int x, int y) {
	int returnValue;
	returnValue = x+y;
	return returnValue;
}

int main() {
	PrintHelloWorld();
	std::cout << "The sum of 3 and 4 is: " << addTwoIntegers(3, 4) << "\n";
	return 0;
}
