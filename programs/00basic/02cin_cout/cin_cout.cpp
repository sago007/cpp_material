#include <iostream>

int main() {
	int x;
	std::cout << "Enter number: ";
	std::cin >> x;
	std::cout << "You entered: " << x;
	int y;
	std::cout << "\n\nNow enter two numbers: ";
	std::cin >> x >> y;
	std::cout << "The sum is: " << x+y << "\n";
	return 0;
}
