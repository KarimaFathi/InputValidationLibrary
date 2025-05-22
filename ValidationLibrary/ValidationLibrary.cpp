#include <iostream>
#include "clsInputValidate.h"
using namespace std;

int main()
{
	cout << clsInputValidate::isNumberBetween(5, 1, 10) << endl;
	cout << clsInputValidate::isDateBetween(clsDate(), clsDate(14,5,2025), clsDate(16,5,2025));


	cout << "\nPlease enter a number : ";
	int x =  clsInputValidate::readIntNumber("Invalid number, enter again : ");
	cout << "x = " << x;


	cout << "Please enter a number between 10 and 20 : ";
	int y = clsInputValidate::readIntNumberBetween(10, 20);
	cout << "y = " << y;


}

