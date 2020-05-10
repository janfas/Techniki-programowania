#include <iostream>
#include "VectorInt.hpp"
#include "VectorInt.cpp"

int main()
{
    VectorInt a; //deklaracja bez argumentow

    VectorInt b(5); //deklaracja z argumentem

    VectorInt c(b); //uzycie konstruktora kopiujacego

    a.capacity(); //sprawdzenie zaalokowanej pamieci

    b.capacity();

    c.capacity();

    a.insert(1, 0); //dodanie cyfry na danej pozycji

    a.size(); //liczba przechowywanych elementow

    a.pushBack(5); //dodanie liczby na koniec ciagu

    a.at(0); //wyswietlenie liczby na danej pozycji

    a.popBack(); //usuwanie liczby na koncu ciagu

    a.shrinkToFit(); // dostosowanie zaalokowanej pamieci do liczby przechowywanych elementow

    std::cout << a << std::endl; //wyswietlenie calego ciagu

    a.clear(); //usuniecie ciagu
}
