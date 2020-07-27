#include<iostream>
#include "SecondEngine.h"

namespace secondEngine {
	 void DisplayMessage() {
		std::cout << "Second Engine Operational " << std::endl;
	}

	float MultService(float num1, float num2) {
		 return num1 * num2;
	 }

	float DivService(float num1, float num2) {
		 return num1 / num2;
	 }
}