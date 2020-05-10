#include "VectorInt.hpp"
#include <iostream>
#include <vector>

VectorInt::VectorInt()
{
  ciag.reserve(16);
}

VectorInt::~VectorInt()
{
  std::cout << "Ciag zostal usuniety!" << std::endl;
}

VectorInt::VectorInt(int _zmienna)
{
  zmienna = _zmienna;
  ciag.reserve(zmienna);
}

VectorInt::VectorInt(const VectorInt& other)
{
  ciag.reserve(other.zmienna);
}

void VectorInt::at(int pozycja)
{
  std::cout << "Wartosc ktora chcesz wyswietlic to: " << ciag.at(pozycja) << std::endl;
  std::cout << std::endl;
}

void VectorInt::insert(int pozycja, int liczba)
{
  ciag.insert(ciag.begin(), pozycja, liczba);
}

void VectorInt::pushBack(int wielkosc)
{
  ciag.push_back(wielkosc);
}

void VectorInt::popBack()
{
  ciag.pop_back();
}

void VectorInt::shrinkToFit()
{
  ciag.shrink_to_fit();
}

void VectorInt::clear()
{
  ciag.clear();
}

void VectorInt::size()
{
  std::cout << "W ciagu znajduje sie " << ciag.size() << " elementow" << std::endl;
  std::cout << std::endl;
}

void VectorInt::capacity()
{
  std::cout << "W ciagu mozna przechowywac " << ciag.capacity() << " elementow" << std::endl;
  std::cout << std::endl;
}

void VectorInt::out()
{
  for(auto i : ciag)
  {
    std::cout << ciag.at(i) << std::endl;
  }
}

std::ostream & operator << (std::ostream &out, VectorInt &ciag)
{
  ciag.out();
  return out;
}
