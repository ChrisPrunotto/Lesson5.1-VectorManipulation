// Lesson5.1-VectorManipulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main() {

	std::vector<int> vectorList = { 2, 4, 3, 6, 1, 9 };

	int evenSum = 0;
	int oddProduct = 1;

	for (int i = 0; i < vectorList.size(); i++)
	{
		std::cout << "Current number: " << vectorList[i] << std::endl;
		if (vectorList[i] % 2 == 0)
		{
			std::cout << "Even number! \nEven Sum running total: ";
			evenSum = evenSum + vectorList[i];
			std::cout << evenSum << std::endl << "\n";
		}
		else {
			std::cout << "Odd number! \nOdd Product Running Total: ";
			oddProduct = oddProduct * vectorList[i];
			std::cout << oddProduct << std::endl << "\n";
		}
	}

	std::cout << "\n------\nSum of even numbers in vector: " << evenSum << std::endl << "Product of odd numbers in vector: " << oddProduct << std::endl;

}