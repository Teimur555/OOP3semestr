#include <iostream>
#include "date.h"


using namespace std;
// constructor
Date::Date() {
    year = 1;
    month = 1;
    day = 1;
}
//operation
void Date::setYear(int yy) { // set year
    if (1 <= yy)
        year = yy;
}
void Date::setMonth(int mm) { // set month
    if (mm <= 12 && mm >= 1)
        month = mm;
}
void Date::setDay(int dd) { // set day
    
    if (dd <= 31 && dd >= 1)
        if (month != 2 && month != 4 && month != 6 && month != 9 && month != 11)
            day = dd;
        else
        {
            if (month != 1 && month != 2 && month != 3 && month != 5 && month != 7 &&
                month != 8 && month != 10 && month != 12)
                day = dd;
            else
            {
                if (month == 2 && ((year % 4) == 0 && dd <= 29))
                    day = dd;
                else if (dd <= 28)
                    day = dd;
            }
        }
}
void Date::AddDay(int add) { // add day
    if (0 < add)
    {
        month = month + add / 30;
        day = day + add % 30;
        if (day > 30) {
            day = day % 30;
            month = month + 1;
        }
        year = year + month / 12;
        if (month > 12) {
            month = month % 12;
        }
    }
}
int Date::getYear() { 
    return year;
}
int Date::getMonth() { 
    return month;
}
int Date::getDay() { 
    return day;
}

string Date::Date_to_string() { 
    return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
}

