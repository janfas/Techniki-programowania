#ifndef FIGURE_HPP_INCLUDED
#define FIGURE_HPP_INCLUDED
#include "Circle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "Circle.cpp"
#include "Triangle.cpp"
#include "Rectangle.cpp"

class Figure
  {
    public:
      Figure(int);

      Figure(int, int);

      Figure(int, int, int);

      virtual void pola();

      virtual void obwody();

  };

  std::ostream & operator << (std::ostream &out, Figure &);

#endif
