#include <iostream>
#include "dayType.h"
#include <string>

dayType::dayType()
{
	today = " ";
}

void dayType::setDay(string newDy)
{
	//if statment for setting day
	if(newDy == "monday" || newDy == "Monday")
	{
		today = "Monday";
	}
	else if (newDy == "tuesday" || newDy == "Tuesday")
	{
		today = "Tuesday";
	}
	else if (newDy == "wednesday" || newDy == "Wednesday")
	{
		today = "Wednesday";
	}
	else if (newDy == "thursday" || newDy == "Thursday")
	{
		today = "Thursday";
	}
	else if (newDy == "friday" || newDy == "Friday")
	{
		today = "Friday";
	}
	else if (newDy == "saturday" || newDy == "Saturday")
	{
		today = "Saturday";
	}
	else if (newDy == "sunday" || newDy == "Sunday")
	{
		today = "Sunday";
	}
	else
	{
		cout << "This is end of program" << endl;
		exit(0);
	}

}

void dayType::print()
{
	cout << today << endl;
}

string dayType::getDay() //return day
{
	return today; 
}

string dayType::getNextDay() //return next day
{
	//new day as number
	int nDay;
	//new day as the actual
	string nuDay;

	//
	nDay = Conversion(today)+1;

	if(nDay == 8)
	{
		nuDay = "Monday";
	}
	else if(nDay == 7)
	{
		nuDay = "Sunday";
	}
	else if(nDay == 6)
	{
		nuDay = "Saturday";
	}
	else if(nDay == 5)
	{
		nuDay = "Friday";
	}
	else if(nDay == 4)
	{
		nuDay = "Thursday";
	}
	else if(nDay == 3)
	{
		nuDay = "Wednesday";
	}
	else if(nDay == 2)
	{
		nuDay = "Tuesday";
	}

	return nuDay;
}

string dayType::getPreviousDay() //return previous day
{
	//new day as number
	int nDay;
	//new day as the actual
	string nuDay;

	//
	nDay = Conversion(today)-1;

	if(nDay == 6)
	{
		nuDay = "Saturday";
	}
	else if(nDay == 5)
	{
		nuDay = "Friday";
	}
	else if(nDay == 4)
	{
		nuDay = "Thursday";
	}
	else if(nDay == 3)
	{
		nuDay = "Wednesday";
	}
	else if(nDay == 2)
	{
		nuDay = "Tuesday";
	}
	else if(nDay == 1)
	{
		nuDay = "Monday";
	}
	else if(nDay == 0)
	{
		nuDay = "Sunday";
	}

	return nuDay;
}

//calc and return the day
string dayType::Calculate(int numberOfDays)
{
	int numD1, numD2;
	string ND;

	//finds the remainder
	numD1 = numberOfDays%7;

	//adds the remainder 
	numD2 = numD1 + Conversion(today);

	//assigns today the value of numD2
	if(numD2 == 7)
	{
		ND = "Sunday";
	}
	else if(numD2 == 6 || numD2 == 13)
	{
		ND = "Saturday";
	}
	else if(numD2 == 5 || numD2 == 12)
	{
		ND = "Friday";
	}
	else if(numD2 == 4 || numD2 == 11)
	{
		ND = "Thursday";
	}
	else if(numD2 == 3 || numD2 == 10)
	{
		ND = "Wednesday";
	}
	else if(numD2 == 2 || numD2 == 9)
	{
		ND = "Tuesday";
	}
	else if(numD2 == 1 || numD2 == 8)
	{
		ND = "Monday";
	}

	return ND;
}

int dayType::Conversion(string conDay)
{
	int cDay;

	if (conDay == "Monday")
	{
		cDay = 1;
	}
	else if (conDay == "Tuesday")
	{
		cDay = 2;
	}
	else if (conDay == "Wednesday")
	{
		cDay = 3;
	}
	else if (conDay == "Thursday")
	{
		cDay = 4;
	}
	else if (conDay == "Friday")
	{
		cDay = 5;
	}
	else if (conDay == "Saturday")
	{
		cDay = 6;
	}
	else if (conDay == "Sunday")
	{
		cDay = 7;
	}

	return cDay;
}
