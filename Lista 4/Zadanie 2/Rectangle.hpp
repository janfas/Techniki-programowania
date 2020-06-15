#ifndef RECTANGLE_HPP_INCLUDED
#define RECTANGLE_HPP_INCLUDED
#include <array>

class Rectangle
  {
    private:
      std::array<int, 2> rectangle;

    public:
      Rectangle(int, int);

      int poleR(int, int);

      int obwodR(int, int);
  };

#endif
