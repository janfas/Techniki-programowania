#include "Triangle.hpp"
#include <iostream>
#include <cmath>

Triangle::Triangle(int a, int b, int c)
{
  triangle.at(0) = a;
  triangle.at(1) = b;
  triangle.at(2) = c;
}

int Triangle::poleT(int a, int b, int c)
{
  int p;
  p = sqrt((a+b+c)*(a+b-c)*(a-b+c)*(-a+b+c))/4;
  return p;
}

int Triangle::obwodT(int a, int b, int c)
{
  int o;
  o = (a+b+c);
  return o;
}
