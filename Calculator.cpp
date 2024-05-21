#include <iostream>

int main() {
	std::string input;
	std::cout << "Calcuator:";
	std::cin >> input;
	double x;
	double y;
	if (input == "add") {
		std::cout << "Number 1: ";
		std::cin >> x;
		std::cout << "Number 2: ";
		std::cin >> y;
		std::cout  <<"Answer: "<< x + y;
	}
	else if (input == "subtract") {
		std::cout << "Number 1: ";
		std::cin >> x;
		std::cout << "Number 2: ";
		std::cin >> y;
		std::cout << "Answer: " << x - y;
	}
	else if (input == "divide") {
		std::cout << "Number 1: ";
		std::cin >> x;
		std::cout << "Number 2: ";
		std::cin >> y;
		std::cout << "Answer: " << x / y;

	}
	else if (input == "multiply") {
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
