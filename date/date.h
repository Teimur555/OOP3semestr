#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>

using namespace std;
class Date {
private:
    // ���� ������
    int year; //���
    int month; //�����
    int day; //����

public:
    // �����������
    Date();
    //��������
    void setYear(int yy); // ����� �������� ����
    void setMonth(int mm); // ����� �������� �����
    void setDay(int dd); // ����� �������� ����
    void AddDay(int add); // �������� ����
    int getYear(); // ����� �������� ����
    int getMonth(); // ����� �������� ������
    int getDay(); // ����� �������� ���
    string Date_to_string(); // ����� �������� ���
};
#endif // DATE_H



