#include <iostream>
using namespace std;
const float pi = 3.14159265358979323846;
class Geometry_figure
{
public:
    virtual float perimetr() = 0;
    virtual float area() = 0;
};
class Triangle : public Geometry_figure
{
private:
    float its_a, its_b, its_c;
public:
    Triangle(float a, float b, float c);
    void set_abc(float a, float b, float c);
    float get_a();
    float get_b();
    float get_c();
    float perimetr();
    float area();
};
class Rectangle : public Geometry_figure
{
private:
    float its_a, its_b;
public:
    Rectangle(float a, float b);
    void set_a(float a);
    void set_b(float b);
    float get_a();
    float get_b();
    float perimetr();
    float area();
};
class Circle : public Geometry_figure
{
private:
    float its_radius;
public:
    Circle(float radius);
    void set_radius(float radius);
    float get_radius();
    float perimetr();
    float area();
};

