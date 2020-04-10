#include <iostream>
#include <vector>

void wypisanie(std::vector< std::vector<int> > wypisanie, int n)
{
    std::cout << "Tabela dzielnikow liczb od 1 do " << n << " prezentuje sie nastepujaco:" << std::endl;
        for(int i=0; i<n; i++)
        {
            std::cout << "Dzielniki " << i+1 << ":";
            for(auto j : wypisanie.at(i))
            {
                std::cout.width(5);
                std::cout << j;
            }
            std::cout << std::endl;
        }
}
void liczenieDzielnikow(int n)
{
    std::vector< std::vector<int> > dzielniki;
        dzielniki.resize(n);
        for (int i=0; i<n; i++)
        {
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
                }
            }
        }
    wypisanie(dzielniki, n);
}
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
        liczenieDzielnikow(n);
        return 0;
    }
}