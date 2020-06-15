#ifndef TRIANGLE_HPP_INCLUDED
#define TRIANGLE_HPP_INCLUDED
#include <array>

class Triangle
  {
    private:
      std::array<int, 3> triangle;

    public:
      Triangle(int, int, int);

      int poleT(int, int, int);

      int obwodT(int, int, int);
  };

#endif
