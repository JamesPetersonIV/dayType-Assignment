#ifndef DAYTYPE_H // include guard
#define DAYTYPE_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class dayType
{
    private:
            //string days[7];
            string today;
            //int dayCount;

    public:
            void setDay(string newDy);//set day
            void print();//print day
            string getDay(); //return day
			string getNextDay(); //return next day
			string getPreviousDay(); //return previous day
			string Calculate(int);//calculate
			int Conversion(string conDay);
			dayType();
};

#endif 
