//Write a program that asks the user to enter the month (letting the user enter an integer in the range of 1 through 12) and the year.
//The program should then display the number of days in that month.
//Determine whether the year is divisible by 100. If it is, then it is a leap year if and only if it is divisible by 400.
//If the year is not divisible by 100, then it is a leap year if and only if it is divisible by 4.

#include <iostream>

//Checks if leap year or not
bool isLeapYear(int year) {
	return (year % 400 == 0 || year % 100 != 0 && year % 4 == 0);
}

//Main function for determining days in a month
int main() {
	
	//Variables
	int month, year;
	
	//Array of days in a month
	int daysInAMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	//Asks user for month and year value
		std::cout << "Enter a month (1-12):\n";
		std::cin >> month;
		std::cout << "Enter a year:\n";
		std::cin >> year;
	
	//Error for invalid month
		if (month < 0 || month > 12) {
			std::cout << "Invalid Month.";
			return 1;
		}

	//Checks if month is Feburary and if it is a leap year
		if (month == 2 && isLeapYear(year)) {
			std::cout << daysInAMonth[1] + 1 << " days" << std::endl;
		}

	//if not leap year then output not leap year values
		else {
			std::cout << daysInAMonth[month - 1] << " days" << std::endl;
		}
	return 0;
}