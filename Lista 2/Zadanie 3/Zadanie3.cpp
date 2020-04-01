#include <iostream>
#include <array>
#include <vector>
int main()
{
    std::cout << "Tablicowanie dzielnikow liczb od 1 do n:" << std::endl;
    int n;
    std::cout << "Na ktorej liczbie chcesz zakonczyc pokazywanie dzielnikow?" << std::endl;
    std::cin >> n;
    std::cout << std::endl;
    if(n<=1)
    {
        if(n==1)
        {
            std::cout << "Dzielnikiem liczby 1 jest 1" << std::endl;
            return 0; 
        }
        else
        {
            std::cout << "Podano liczbe mniejsza od 1!" << std::endl;
            return 0;
        }
    }
    else
    {
        int liczbaDzielnikow[n];
        std::vector< std::vector<int> > dzielniki;
        dzielniki.resize(n);
        for (int i=0; i<n; i++)
        {
            liczbaDzielnikow[i]=0;
            int pozycja=0;
            dzielniki.at(i).resize(1);
            dzielniki.at(i).at(0)= i+1;
            for (int j=1; j<=i; j++)
            {
                if((i+1)%(j)==0)
                {
                    pozycja++;
                    dzielniki.at(i).resize(pozycja+1);
                    dzielniki.at(i).at(pozycja)= j;
                    liczbaDzielnikow[i]+=1;
                }
            }
        }
        std::cout << "Tabela dzielnikow liczb od 1 do " << n << " prezentuje sie nastepujaco:" << std::endl;
        std::cout << "(Liczba dzieli sie rowniez sama przez siebie)" << std::endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=liczbaDzielnikow[i]; j++)
            {
                std::cout << dzielniki[i][j] << " ";
            }
            std::cout << std::endl;
        }
        return 0;
    }
    

}