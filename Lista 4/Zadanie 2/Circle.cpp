#include "Circle.hpp"
#include <iostream>
#include <cmath>
Circle::Circle(int r)
{
  circle.at(0) = r;
}

int Circle::poleC(int r)
{
  int p;
  p = 3.14*pow(r, 2);
  return p;
}

int Circle::obwodC(int r)
{
  int o;
  o = 3.14*(2*r);
  return o;
}
