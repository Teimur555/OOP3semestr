#include <iostream>
#include "date.h"


using namespace std;
// конструктор
Date::Date() {
    year = 1;
    month = 1;
    day = 1;
}
//ќперации
void Date::setYear(int yy) { // задаю год
    if (1 <= yy)
        year = yy;
}
void Date::setMonth(int mm) { // задаю мес€ц
    if (mm <= 12 && mm >= 1)
        month = mm;
}
void Date::setDay(int dd) { // задаю день
    
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
void Date::AddDay(int add) { // добавл€ю день
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
int Date::getYear() { // „итаю значение года
    return year;
}
int Date::getMonth() { // „итаю значение мес€ц
    return month;
}
int Date::getDay() { // „итаю значение день
    return day;
}

string Date::Date_to_string() { // „итаю дату целиком
    return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
}

