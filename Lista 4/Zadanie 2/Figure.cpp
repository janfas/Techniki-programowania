#include "Figure.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "Circle.cpp"
#include "Triangle.cpp"
#include "Rectangle.cpp"
#include <iostream>

Figure::Figure(int r)
{
  Circle kolo = Circle(r);
}

Figure::Figure(int a, int b)
{
  Rectangle kwadrat = Rectangle(a, b);
}

Figure::Figure(int a, int b, int c)
{
  Triangle trojkat = Triangle(a, b, c);
}

void Figure::pola()
{
  
}

void Figure::obwody()
{

}

std::ostream & operator << (std::ostream &out, Figure &)
{
  return out;
}
