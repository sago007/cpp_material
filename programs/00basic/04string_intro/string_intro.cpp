#include <iostream>
#include <string>

int main() {
	std::string x;
	std::cout << "Enter a string: ";
	std::getline(std::cin, x);
	std::cout << "You entered: " << x << "\n";
	std::cout << "Length of string: " << x.length() << "\n";
	std::string y;
	std::cout << "Enter another string: ";
	std::getline(std::cin, y);
	//Now append the old string
	y = y+x;
	std::cout << "The new string + the old string is: " << y << "\n";
	std::cout << "The length is: " << y.length() << "\n";
	return 0;
}
