#include <iostream>

int main() {
	std::string input;
	std::cout << "Calcuator:";
	std::cin >> input;
	if (input == "add") {
		double x;
		double y;
		std::cout << "Number 1: ";
		std::cin >> x;
		std::cout << "Number 2: ";
		std::cin >> y;
		std::cout  <<"Answer: "<< x + y;
	}
	else if (input == "subtract") {
		double x;
		double y;
		std::cout << "Number 1: ";
		std::cin >> x;
		std::cout << "Number 2: ";
		std::cin >> y;
		std::cout << "Answer: " << x - y;
	}
	else if (input == "divide") {
		
		double x;
		double y;
		std::cout << "Number 1: ";
		std::cin >> x;
		std::cout << "Number 2: ";
		std::cin >> y;
		std::cout << "Answer: " << x / y;

	}
	else if (input == "multiply") {
		double x;
		double y;
		std::cout << "Number 1: ";
		std::cin >> x;
		std::cout << "Number 2: ";
		std::cin >> y;
		std::cout << "Answer: " << x * y;
	}
	else {
		std::cout << "Could not understand input.";
	}
	return 0;
}