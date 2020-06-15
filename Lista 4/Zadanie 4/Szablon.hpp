#ifndef SZABLON_HPP_INCLUDED
#define SZABLON_HPP_INCLUDED
#include <iostream>
#include <map>

template <typename T>
class Szablon
{
  private:
  std::map<T, T> szablon;

  public:
    Szablon();

    void usuwanie(T);

    void dodawanie(T, T);

    void wypisywanie();

};

#endif
