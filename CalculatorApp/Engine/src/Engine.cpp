#include<iostream>
#include "Engine.h"

namespace engine{
	void PrintMessage() {
		std::cout << "First Engine Operational" << std::endl;
	}

	float AdderService(float num1, float num2) {
		return num1 + num2;
	}

	float SubService(float num1, float num2) {
		return num1 - num2;
	}
}