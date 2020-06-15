#include "Szablon.hpp"
#include <iostream>
#include <map>
#include <iterator>

template <typename T>
Szablon<T>::Szablon()
{
  szablon.clear();
}

template <typename T>
void Szablon<T>::usuwanie(T klucz)
{
  typename std::map<T, T>::iterator i = szablon.find(klucz);
  szablon.erase(i);
}

template <typename T>
void Szablon<T>::dodawanie(T klucz, T wartosc)
{
  if(szablon.find(klucz) == true)
  {
    typename std::map<T, T>::iterator i = szablon.find(klucz);
    szablon.erase(i);
    szablon.insert(std::pair<T, T> (klucz, wartosc));
  }
  else
  szablon.insert(std::pair<T, T> (klucz, wartosc));
}

template <typename T>
void Szablon<T>::wypisywanie()
{
  typename std::map<std::string, std::string>::iterator i;
  for(i = szablon.begin(); i != szablon.end(); ++i)
  {
  std::cout << "Klucz: " << i -> first << "\t\tWartosc: " << i -> second << std::endl;
  }
}
