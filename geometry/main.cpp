#include "main.h"
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle T(2, 2, 2);
    Rectangle R(5, 4);
    Circle C(3);
    cout << "Сторона a треугольника равна: " << T.get_a() << endl;
    cout << "Сторона b треугольника равна: " << T.get_b() << endl;
    cout << "Сторона c треугольника равна: " << T.get_c() << endl;
    cout << "Сторона a прямоугольника равна: " << R.get_a() << endl;
    cout << "Сторона b прямоугольника равна: " << R.get_b() << endl;
    cout << "Радиус окружности: " << C.get_radius() << endl;
    cout<<"Площадь теругольника: "<<T.area()<<" Периметр: "<<T.perimetr()<<endl;
    cout<<"Площадь прямоугольника: "<<R.area()<<" Периметр: "<<R.perimetr()<<endl;
    cout<<"Площадь круга: "<<C.area()<<endl;
    T.set_abc(5,4,6);
    R.set_b(10);
    C.set_radius(20);
    cout << "Сторона a треугольника равна: " << T.get_a() << endl;
    cout << "Сторона b прямоугольника равна: " << R.get_b() << endl;
    cout << "Радиус окружности: " << C.get_radius() << endl;
    return 0;
}
