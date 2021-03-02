
#include<iostream>
#include "date.h"

using namespace std;

int main() {
    Date dmy; // переменная дата
    int dd, mm, yy, n;

    cout << "Year?" << endl;
    cin >> yy;
    dmy.setYear(yy);

    cout << "Month?" << endl;
    cin >> mm;
    dmy.setMonth(mm);

    cout << "Day?" << endl;
    cin >> dd;
    dmy.setDay(dd);

    cout << dmy.Date_to_string() << endl;
    cout << "add day?" << endl << "n = ";
    cin >> n;
    dmy.AddDay(n);
    cout << dmy.Date_to_string();
    return 0;
}
