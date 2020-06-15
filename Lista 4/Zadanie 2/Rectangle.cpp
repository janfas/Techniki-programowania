#include "Rectangle.hpp"
#include <iostream>

Rectangle::Rectangle(int a, int b)
{
  rectangle.at(0) = a;
  rectangle.at(1) = b;
}

int Rectangle::poleR(int a, int b)
{
  int p;
  p = a*b;
  return p;
}

int Rectangle::obwodR(int a, int b)
{
  int o;
  o = (2*a)+(2*b);
  return o;
}
