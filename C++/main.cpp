
#include <iostream>

int main()
{
	int option;
	std::cout << "Enter option:\n" <<
				"\t1. Fahrenheit in Celsius\n" <<
				"\t2. Celsius in Fahrenheit\n";
	std::cin >> option;
	
	float Tf, Tc;
	if (option == 1) {
		std::cout << "Enter temperature in Fahrenheit:\n";
		std::cin >> Tf;
		Tc = (Tf - 32) * 5/9;
		std::cout << Tf << "F° = " << Tc << "C°" << std::endl;
	}
	else if (option == 2) {
		std::cout << "Enter temperature in Celsius:\n";
		std::cin >> Tc;
		Tf = (Tc * (9/5)) + 32;
		std::cout << Tc << "C° = " << Tf << "F°" << std::endl;
	}
	else {
		std::cout << "Invalid option: " << option << std::endl;
	}
	return 0;
}
