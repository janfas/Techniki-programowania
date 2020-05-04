#include<iostream>
#include<array>
enum Kolejnosc
{
  p=0,
  x=1,
  o=2
};
class TicTacToe
{
  private:
    std::array <std::array<Kolejnosc, 3>, 3> plansza = {{
    {0,0,0},
    {0,0,0},
    {0,0,0},
  }};
  public:
    void poczatek()
    {
      int wybor;
      Kolejnosc kolejnosc = p;
      std::cout << "Rozgrywka w kolko i krzyzyk:" << std::endl;
      std::cout << "Kto zaczyna?" << std::endl;
      std::cout << "1. Krzyzyk" << std::endl;
      std::cout << "2. Kolko" << std::endl;
      std::cin >> wybor;
      if (wybor == 1)
      kolejnosc = x;
      else
      kolejnosc = o;
      ruch(kolejnosc);
    }
    void wypisanie()
    {
      for(int i=0; i<3; i++)
      {
        for(auto j : plansza.at(i))
        {
          if(j==0)
          {
          std::cout.width(3);
          std::cout << "p";
          }
          else
          {
            if(j==1)
            {
            std::cout.width(3);
            std::cout << "x";
            }
            else
            {
              std::cout.width(3);
              std::cout << "o";
            }
          }
        }
        std::cout << std::endl;
      }
      std::cout << "Legenda:" << std::endl;
      std::cout << "p - Puste pole" << std::endl;
      std::cout << "o - Kolko" << std::endl;
      std::cout << "x - Krzyzyk" << std::endl;
    }
    void ruch(Kolejnosc kolejnosc)
    {
      int kolumna, wiersz;
      wypisanie();
      std::cout << "Numery kolumn od lewej do prawej - 1, 2, 3" << std::endl;
      std::cout << "Numery wierszy z gory na dol - 1, 2, 3" << std::endl;
      std::cout << "W ktorym wierszu chcesz wykonac ruch?" << std::endl;
      std::cin >> wiersz;
      std::cout << "W ktorej kolumnie chcesz wykonac ruch?" << std::endl;
      std::cin >> kolumna;
      if(plansza.at(wiersz-1).at(kolumna-1)==p)
      {
        plansza.at(wiersz-1).at(kolumna-1) = kolejnosc;
        if(kolejnosc == x)
        kolejnosc=o;
        else
        kolejnosc=x;
        wynik(kolejnosc);
      }
      else
      {
        std::cout << "Blad! Pole zajete, sprobuj ponownie!" << std::endl;
        ruch(kolejnosc);
      }
    }
    bool sprawdzenie()
    {
      for(int i = 0; i<3; i++)
      {
          if(plansza.at(0).at(i)==plansza.at(1).at(i)
          && plansza.at(0).at(i)==plansza.at(2).at(i)
          && plansza.at(0).at(i)!=0)
          return true;
          else
          {
              if(plansza.at(i).at(0)==plansza.at(i).at(1)
              && plansza.at(i).at(0)==plansza.at(i).at(2)
              && plansza.at(i).at(0)!=0)
              return true;
              else
              {
                  if(plansza.at(0).at(0)==plansza.at(1).at(1)
                  && plansza.at(0).at(0)==plansza.at(2).at(2)
                  && plansza.at(0).at(0)!=0)
                  return true;
                  else
                  {
                      if(plansza.at(0).at(2)==plansza.at(1).at(1)
                      && plansza.at(0).at(2)==plansza.at(2).at(0)
                      && plansza.at(0).at(2)!=0)
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
    void wynik(Kolejnosc kolejnosc)
    {
      if(sprawdzenie() == true)
      {
        if (kolejnosc == o)
        {
          wypisanie();
          std::cout << "Gratulacje! Zwyciezyl gracz grajacy krzyzykami!" << std::endl;
        }
        else
        {
          wypisanie();
          std::cout << "Gratulacje! Zwyciezyl gracz grajacy kolkami!" << std::endl;
        }
      }
      else
      ruch(kolejnosc);
    }
};

int main()
{
  TicTacToe gra;
  gra.poczatek();
}
