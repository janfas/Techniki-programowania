#ifndef VECTORINT_HPP_INCLUDED
#define VECTORINT_HPP_INCLUDED
#include <iostream>
#include <vector>

class VectorInt
{
private:

    std::vector<int> ciag;

    int zmienna;

public:

    VectorInt();  // konstruktor bez argumentow

    ~VectorInt(); // destruktor

    VectorInt(int); //konstruktor z argumentem

    VectorInt(const VectorInt& other);  //konstruktor kopiujacy

    VectorInt& operator = (const VectorInt& other); //operator przypisania

    void at(int);

    void insert(int, int);

    void pushBack(int);

    void popBack();

    void shrinkToFit();

    void clear();

    void size();

    void capacity();

    void out();
};

std::ostream& operator << (std::ostream &out, VectorInt &ciag); //przeciazony operator wypisywania

#endif
