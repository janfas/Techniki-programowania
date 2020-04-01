#include<iostream>
#include<array>

void ruch(std::array <std::array<char, 3>, 3> ruch);
void sprawdzenieWyniku(std::array <std::array<char, 3>, 3> sprawdzenieWyniku);
void wypisaniePlanszy(std::array <std::array<char,3>, 3> wypisaniePlanszy)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            std::cout.width(3);
            std::cout << wypisaniePlanszy[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << "Legenda:" << std::endl;
    std::cout << "p - Puste pole" << std::endl;
    std::cout << "o - Kolko" << std::endl;
    std::cout << "x - Krzyzyk" << std::endl;
    std::cout << "Numery kolumn od lewej do prawej - 1, 2, 3" << std::endl;
    std::cout << "Numery wierszy z gory na dol - 1, 2, 3" << std::endl;
    sprawdzenieWyniku(wypisaniePlanszy);
}

void sprawdzenieWyniku(std::array <std::array<char, 3>, 3> sprawdzenieWyniku)
{
    if(sprawdzenieWyniku.at(0).at(0)==sprawdzenieWyniku.at(0).at(1) && sprawdzenieWyniku.at(0).at(0)==sprawdzenieWyniku.at(0).at(2))
    {
        if (sprawdzenieWyniku.at(0).at(0) =='x')
        {
            std::cout << "Zwyciezyl gracz grajacy krzyzykami!" << std::endl;
        }
        else
        {
            if(sprawdzenieWyniku.at(0).at(0) =='o')
            {
            std::cout << "Zwyciezyl gracz grajacy kolkami!" << std::endl;
            }
            else
            {
                ruch(sprawdzenieWyniku);
            }
        }
    }
    else
    {
        if(sprawdzenieWyniku.at(1).at(0)==sprawdzenieWyniku.at(1).at(1) && sprawdzenieWyniku.at(1).at(0)==sprawdzenieWyniku.at(1).at(2))
        {
            if (sprawdzenieWyniku.at(1).at(0) =='x')
            {
                std::cout << "Zwyciezyl gracz grajacy krzyzykami!" << std::endl;
            }
            else
            {
                if(sprawdzenieWyniku.at(1).at(0) =='o')
                {
                std::cout << "Zwyciezyl gracz grajacy kolkami!" << std::endl;
                }
                else
                {
                    ruch(sprawdzenieWyniku);
                }
            }
        }
        else
        {
            if(sprawdzenieWyniku.at(2).at(0)==sprawdzenieWyniku.at(2).at(1) && sprawdzenieWyniku.at(2).at(0)==sprawdzenieWyniku.at(2).at(2))
            {
                if (sprawdzenieWyniku.at(2).at(0) =='x')
                {
                    std::cout << "Zwyciezyl gracz grajacy krzyzykami!" << std::endl;
                }
                else
                {
                    if(sprawdzenieWyniku.at(2).at(0) =='o')
                    {
                        std::cout << "Zwyciezyl gracz grajacy kolkami!" << std::endl;
                    }
                    else
                    {
                        ruch(sprawdzenieWyniku);
                    }
                }
            }
            else
            {
                if(sprawdzenieWyniku.at(0).at(0)==sprawdzenieWyniku.at(1).at(0) && sprawdzenieWyniku.at(0).at(0)==sprawdzenieWyniku.at(2).at(0))
                {
                    if (sprawdzenieWyniku.at(0).at(0) =='x')
                    {
                        std::cout << "Zwyciezyl gracz grajacy krzyzykami!" << std::endl;
                    }
                    else
                    {
                        if(sprawdzenieWyniku.at(0).at(0) =='o')
                        {
                            std::cout << "Zwyciezyl gracz grajacy kolkami!" << std::endl;
                        }
                        else
                        {
                            ruch(sprawdzenieWyniku);
                        }
                    }
                }
                else
                {
                    if(sprawdzenieWyniku.at(0).at(1)==sprawdzenieWyniku.at(1).at(1) && sprawdzenieWyniku.at(0).at(1)==sprawdzenieWyniku.at(2).at(1))
                    {
                        if (sprawdzenieWyniku.at(0).at(1) =='x')
                        {
                            std::cout << "Zwyciezyl gracz grajacy krzyzykami!" << std::endl;
                        }
                        else
                        {
                            if(sprawdzenieWyniku.at(0).at(1) =='o')
                            {
                                std::cout << "Zwyciezyl gracz grajacy kolkami!" << std::endl;
                            }
                            else
                            {
                                ruch(sprawdzenieWyniku);
                            }
                        }
                    }
                    else
                    {
                        if(sprawdzenieWyniku.at(0).at(2)==sprawdzenieWyniku.at(1).at(2) && sprawdzenieWyniku.at(0).at(2)==sprawdzenieWyniku.at(2).at(2))
                        {
                            if (sprawdzenieWyniku.at(0).at(2) =='x')
                            {
                                std::cout << "Zwyciezyl gracz grajacy krzyzykami!" << std::endl;
                            }
                            else
                            {
                                if(sprawdzenieWyniku.at(0).at(2) =='o')
                                {
                                    std::cout << "Zwyciezyl gracz grajacy kolkami!" << std::endl;
                                }
                                else
                                {
                                    ruch(sprawdzenieWyniku);
                                }
                            }
                        }
                        else
                        {
                            if(sprawdzenieWyniku.at(0).at(0)==sprawdzenieWyniku.at(1).at(1) && sprawdzenieWyniku.at(0).at(0)==sprawdzenieWyniku.at(2).at(2))
                            {
                                if (sprawdzenieWyniku.at(0).at(0) =='x')
                                {
                                    std::cout << "Zwyciezyl gracz grajacy krzyzykami!" << std::endl;
                                }
                                else
                                {
                                    if(sprawdzenieWyniku.at(0).at(0) =='o')
                                    {
                                        std::cout << "Zwyciezyl gracz grajacy kolkami!" << std::endl;
                                    }
                                    else
                                    {
                                        ruch(sprawdzenieWyniku);
                                    }
                                }
                            }
                            else
                            {
                                if(sprawdzenieWyniku.at(0).at(2)==sprawdzenieWyniku.at(1).at(1) && sprawdzenieWyniku.at(0).at(2)==sprawdzenieWyniku.at(2).at(0))
                                {
                                    if (sprawdzenieWyniku.at(2).at(0) =='x')
                                    {
                                        std::cout << "Zwyciezyl gracz grajacy krzyzykami!" << std::endl;
                                    }
                                    else
                                    {
                                        if(sprawdzenieWyniku.at(0).at(0) =='o')
                                        {
                                            std::cout << "Zwyciezyl gracz grajacy kolkami!" << std::endl;
                                        }
                                        else
                                        {
                                            ruch(sprawdzenieWyniku);
                                        }
                                    }
                                }
                                else
                                {
                                    ruch(sprawdzenieWyniku);
                                }
                                
                            }
                        }
                        
                    }
                    
                }
            }
            
        }
        
    }
}

void ruch(std::array <std::array<char, 3>, 3> ruch) 
{
    int kolumna, wiersz;
    char wybor;
    std::cout << "Czyj ruch?" << std::endl;
    std::cout << "o - Kolko" << std::endl;
    std::cout << "x - Krzyzyk" << std::endl;
    std::cin >> wybor;
    if(wybor == 'o' || wybor == 'x')
    {
    std::cout << std::endl;
    std::cout << "W ktorym wierszu chcesz umiescic " << wybor << "?";
    std::cout << std::endl;
    std::cin >> wiersz;
    std::cout << std::endl;
    std::cout << "W ktorej kolumnie chcesz umiescic " << wybor << "?";
    std::cout << std::endl;
    std::cin >> kolumna;
    std::cout << std::endl;
    ruch.at(wiersz-1).at(kolumna-1)=wybor;
    wypisaniePlanszy(ruch);
    }
    else
    {
        std::cout << "Blad, niepoprawny znak!" << std::endl;
    }
    
}

int main()
{
    std::array <std::array<char,3>, 3> plansza =   {{
                                                        {'p','p','p'},
                                                        {'p','p','p'},
                                                        {'p','p','p'},
                                                        }};
    std::cout << "Rozgrywka w kolko i krzyzyk:" << std::endl;
    wypisaniePlanszy(plansza);
}