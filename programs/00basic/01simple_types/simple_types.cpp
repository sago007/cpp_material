#include <iostream>

int main() {
	//Some simple types:
	bool a_boolean_value = false;
	int x = 5;
	float y = 0.5f;
	double z = 0.7;
	char tegn = 'A';

	//Print them
	std::cout << "a_boolean_value: " << a_boolean_value << "\n";
	std::cout << "x: " << x << "\n";
	std::cout << "y: " << y << "\n";
	std::cout << "z: " << z << "\n";
	std::cout << "tegn: " << tegn << "\n";

	std::cout << "\n";

	std::cout << "Assigning 5+4 to x\n";
	x = 5+4;
	std::cout << "x: " << x << "\n";
	std::cout << "\n";
	std::cout << "Assigning x+2 to g\n";
	int g = x+2;
	std::cout << "g: " << g << "\n";

	return 0;
}
