#include "Engine.h"
#include<iostream>
#include"SecondEngine.h"
#include <string>

int main() {
	engine::PrintMessage();
	secondEngine::DisplayMessage();
	float total = 0;
	float num2 = 0;
	std::string input= "x" ;

	char operation = '=';
	std::cin >> total;
	while (input != "=") {
		std::cin >> input;
		
		if (input == "+" || input == "-" || input == "*" || input == "/") {
			operation = input[0];
		}
		else if (input != "=") {
			num2 = std::stof(input);
			std::cout << "num2 value :: " << num2<< std::endl;
			switch (operation)
			{
			case '+': {
				total = engine::AdderService(total, num2);
				std::cout << total << std::endl;
				break;
			}
			case '-': {
				total = engine::SubService(total, num2); 
				std::cout << total << std::endl; 
				break; 
			}
			case '*': {
				total = secondEngine::MultService(total, num2); 
				std::cout << total << std::endl; 
				break; 
			}
			case '/': {
				total = secondEngine::DivService(total, num2); 
				std::cout << total << std::endl; 
				break;
			}
			default:
				break;
			}
			
		}
	}

	std::cout <<"Total Output ::" << total << std::endl;
}