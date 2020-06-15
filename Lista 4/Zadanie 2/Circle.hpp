#ifndef CIRCLE_HPP_INCLUDED
#define CIRCLE_HPP_INCLUDED
#include <array>

class Circle
  {
    private:
      std::array<int, 1> circle;

    public:
      Circle(int);

      int poleC(int);

      int obwodC(int);
  };

#endif
