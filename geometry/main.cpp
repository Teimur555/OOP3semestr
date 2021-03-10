#include "main.h"
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle T(2, 2, 2);
    Rectangle R(5, 4);
    Circle C(3);
    cout << "������� a ������������ �����: " << T.get_a() << endl;
    cout << "������� b ������������ �����: " << T.get_b() << endl;
    cout << "������� c ������������ �����: " << T.get_c() << endl;
    cout << "������� a �������������� �����: " << R.get_a() << endl;
    cout << "������� b �������������� �����: " << R.get_b() << endl;
    cout << "������ ����������: " << C.get_radius() << endl;
    cout<<"������� ������������: "<<T.area()<<" ��������: "<<T.perimetr()<<endl;
    cout<<"������� ��������������: "<<R.area()<<" ��������: "<<R.perimetr()<<endl;
    cout<<"������� �����: "<<C.area()<<endl;
    T.set_abc(5,4,6);
    R.set_b(10);
    C.set_radius(20);
    cout << "������� a ������������ �����: " << T.get_a() << endl;
    cout << "������� b �������������� �����: " << R.get_b() << endl;
    cout << "������ ����������: " << C.get_radius() << endl;
    return 0;
}
