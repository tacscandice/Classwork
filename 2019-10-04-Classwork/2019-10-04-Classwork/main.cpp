// Name: Candice Duncan
// Intro to Computer Science
// Period 1
// Mr. Williams
// 2019-10-04-Classwork

#include <iostream>

int main()
{
	// 3
	float pi = 4 * (1.0 - (1 / 3.0) + (1 / 5) - (1 / 7.0) + (1 / 9.0) - (1 / 11.0));
	float pi2 = 4 * (1.0 - (1 / 3.0) + (1 / 5) - (1 / 7.0) + (1 / 9.0) - (1 / 11.0) + (1 / 13.0));
	std::cout << "Pi=" << pi << std::endl;
	std::cout << "Pi2=" << pi2 << std::endl;


	// 4
	float celsius;
	std::cout << "Enter a degree in Celsius";
	std::cin >> celsius;
	float fahrenheit = (9.0 / 5.0) * celsius + 32;
	std::cout << celsius << " in Fahrenheit is " << fahrenheit << std::endl;
}