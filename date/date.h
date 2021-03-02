#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>

using namespace std;
class Date {
private:
    // пол€ класса
    int year; //год
    int month; //мес€ц
    int day; //день

public:
    // конструктор
    Date();
    //ќперации
    void setYear(int yy); // задаю значение года
    void setMonth(int mm); // задаю значение мес€ц
    void setDay(int dd); // задаю значение день
    void AddDay(int add); // добавл€ю день
    int getYear(); // „итаю значение года
    int getMonth(); // „итаю значение мес€ца
    int getDay(); // „итаю значение дн€
    string Date_to_string(); // вывод значени€ дн€
};
#endif // DATE_H



