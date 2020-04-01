#include <iostream>
#include <vector>

int main()
{
    std::cout << "Generowanie tabliczki mnozenia:" << std::endl;
    int n;
    std::cout << "Na ktorej liczbie chcesz zakonczyc tabliczke mnozenia?" << std::endl;
    std::cin >> n;
    std::cout << std::endl;
    if(n<1)
    {
        std::cout << "Podano zla liczbe!" << std::endl;
        return 0;
    }
    else
    {
        std::vector< std::vector<int> > tabliczkaMnozenia;
        tabliczkaMnozenia.resize(n);
        for(int i=0; i<n; i++)
        {
            tabliczkaMnozenia.at(i).resize(n);
            for(int j=0; j<n; j++)
            {
                tabliczkaMnozenia.at(i).at(j)=(i+1)*(j+1);
            }
        }
        std::cout << "Tabliczka mnozenia liczb od 1 do " << n << " prezentuje sie nastepujaco:" << std::endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                std::cout.width(10);
                std::cout << tabliczkaMnozenia[i][j];
            }
            std::cout << std::endl;
        }
        return 0;
    }
    
}