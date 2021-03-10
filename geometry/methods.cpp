#include "main.h"
#include <cmath>
Triangle::Triangle(float a, float b, float c)
{
    set_abc(a, b, c);
}
void Triangle::set_abc(float a, float b, float c)
{
    if (a > 0 and b > 0 and c > 0)
    {
        if (a + b > c and b + c > a and a + c > b)
        {
            its_a = a;
            its_b = b;
            its_c = c;
        }
    }
}
float Triangle::get_a()
{
    return its_a;
}
float Triangle::get_b()
{
    return its_b;
}
float Triangle::get_c()
{
    return its_c;
}
float Triangle::perimetr()
{
    return its_a + its_b + its_c;
}
float Triangle::area()
{
    float p = perimetr() / 2;
    return sqrt(p * (p - its_a) * (p - its_b) * (p - its_c));
}
Rectangle::Rectangle(float a, float b)
{
    if (a > 0 and b > 0)
    {
        its_a = a;
        its_b = b;
    }
}
void Rectangle::set_a(float a)
{
    if (a > 0)
    {
        its_a = a;
    }
}
void Rectangle::set_b(float b)
{
    if (b > 0)
    {
        its_b = b;
    }
}
float Rectangle::get_a()
{
    return its_a;
}
float Rectangle::get_b()
{
    return its_b;
}

float Rectangle::perimetr()
{
    return (its_a + its_b) * 2;
}
float Rectangle::area()
{
    return its_a * its_b;
}
Circle::Circle(float radius)
{
    if (radius > 0)
    {
        its_radius = radius;
    }
}
void Circle::set_radius(float radius)
{
    if (radius > 0)
    {
        its_radius = radius;
    }
}
float Circle::get_radius()
{
    return its_radius;
}
float Circle::perimetr()
{
    return pi * its_radius * its_radius;
}
float Circle::area()
{
    return 2 * pi * its_radius;
}
