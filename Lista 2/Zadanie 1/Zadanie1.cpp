#include<iostream>
#include<array>
using Plansza=std::array <std::array<char, 3>, 3> ;
void ruch(Plansza ruchGracza, char kolejnosc);
bool sprawdzenieWyniku(Plansza sprawdzenieWyniku);
void wypisaniePlanszy(Plansza wypisaniePlanszy)
{
    for(int i=0; i<3; i++)
    {
        for(auto j : wypisaniePlanszy.at(i))
        {
            std::cout.width(3);
            std::cout << j;
        }
        std::cout << std::endl;
    }
    std::cout << "Legenda:" << std::endl;
    std::cout << "p - Puste pole" << std::endl;
    std::cout << "o - Kolko" << std::endl;
    std::cout << "x - Krzyzyk" << std::endl;
    std::cout << "Numery kolumn od lewej do prawej - 1, 2, 3" << std::endl;
    std::cout << "Numery wierszy z gory na dol - 1, 2, 3" << std::endl;
}

bool sprawdzenieWyniku(Plansza sprawdzenieWyniku)
{
    for(int i = 0; i<3; i++)
    {
        if(sprawdzenieWyniku.at(0).at(i)==sprawdzenieWyniku.at(1).at(i)
        && sprawdzenieWyniku.at(0).at(i)==sprawdzenieWyniku.at(2).at(i)
        && sprawdzenieWyniku.at(0).at(i)!='p')
        return true;
        else
        {
            if(sprawdzenieWyniku.at(i).at(0)==sprawdzenieWyniku.at(i).at(1)
            && sprawdzenieWyniku.at(i).at(0)==sprawdzenieWyniku.at(i).at(2)
            && sprawdzenieWyniku.at(i).at(0)!='p')
            return true;
            else
            {
                if(sprawdzenieWyniku.at(0).at(0)==sprawdzenieWyniku.at(1).at(1)
                && sprawdzenieWyniku.at(0).at(0)==sprawdzenieWyniku.at(2).at(2)
                && sprawdzenieWyniku.at(0).at(0)!='p')
                return true;
                else
                {
                    if(sprawdzenieWyniku.at(0).at(2)==sprawdzenieWyniku.at(1).at(1)
                    && sprawdzenieWyniku.at(0).at(2)==sprawdzenieWyniku.at(2).at(0)
                    && sprawdzenieWyniku.at(0).at(2)!='p')
                    return true;
                    else
                    {
                        return false;
                    }
                    
                }
                
            }
        
        }
        
    }
}

void ruch(Plansza ruchGracza, char kolejnosc) 
{
    int kolumna, wiersz;
    char wybor=kolejnosc;
        std::cout << std::endl;
        std::cout << "W ktorym wierszu chcesz umiescic " << wybor << "?";
        std::cout << std::endl;
        std::cin >> wiersz;
        std::cout << std::endl;
        std::cout << "W ktorej kolumnie chcesz umiescic " << wybor << "?";
        std::cout << std::endl;
        std::cin >> kolumna;
        std::cout << std::endl;
        if(ruchGracza.at(wiersz-1).at(kolumna-1)=='p')
        {
            ruchGracza.at(wiersz-1).at(kolumna-1)=wybor;
            if(sprawdzenieWyniku(ruchGracza) == true)
            {
                    wypisaniePlanszy(ruchGracza);
                    std::cout << "Gra zakonczona, wygral gracz grajacy " << kolejnosc << "!";
            }
            else
            {
                if(wybor=='x')
                {
                    wybor='o';
                    wypisaniePlanszy(ruchGracza);
                    ruch(ruchGracza, wybor);
                }
                else
                {
                    wybor='x';
                    wypisaniePlanszy(ruchGracza);
                    ruch(ruchGracza, wybor);
                }
            }
        }
        else
        {
            std::cout << "To pole jest juz zajete! Wybierz inne pole." << std::endl;
            ruch(ruchGracza, wybor);
        }
}

int main()
{
    char wybor;
    Plansza plansza =   {{
                                                        {'p','p','p'},
                                                        {'p','p','p'},
                                                        {'p','p','p'},
                                                        }};
    std::cout << "Rozgrywka w kolko i krzyzyk:" << std::endl;
    std::cout << "Kto zaczyna?" << std::endl;
    std::cout << "o - Kolko" << std::endl;
    std::cout << "x - Krzyzyk" << std::endl;
    std::cin >> wybor;
    if(wybor == 'o' || wybor == 'x')
    {
    wypisaniePlanszy(plansza);
    ruch(plansza, wybor);
    }
    else
    {
        std::cout << "Blad, niepoprawny znak!" << std::endl;
        return 0;
    }
    
}