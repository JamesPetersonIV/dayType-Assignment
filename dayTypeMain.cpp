#include <iostream>  
#include <string>  
#include "dayType.h"
#include "dayType.cpp"


using namespace std;  

int main()  
{
	dayType weekdays;

	weekdays.setDay("Thursday");
	cout << "The Previous Day is " << weekdays.getPreviousDay() << endl;
	cout << "The Next Day is " << weekdays.getNextDay() << endl;
	cout << "1460 Days from Thursday is " << weekdays.Calculate(1460) << endl;
	cout << "The Current Day is ";
	weekdays.print();
	return 0;  
}
