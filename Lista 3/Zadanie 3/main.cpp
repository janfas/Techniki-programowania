#include<iostream>
#include<array>
enum class Kolejnosc
{
  p=0,
  x=1,
  o=2
};
class TicTacToe
{
  private:
    std::array <std::array<Kolejnosc, 3>, 3> plansza = {{
    {Kolejnosc::p,Kolejnosc::p,Kolejnosc::p},
    {Kolejnosc::p,Kolejnosc::p,Kolejnosc::p},
    {Kolejnosc::p,Kolejnosc::p,Kolejnosc::p},
  }};
  public:
    void poczatek()
    {
      int wybor;
      Kolejnosc k = Kolejnosc::p;
      std::cout << "Rozgrywka w kolko i krzyzyk:" << std::endl;
      std::cout << "Kto zaczyna?" << std::endl;
      std::cout << "1. Krzyzyk" << std::endl;
      std::cout << "2. Kolko" << std::endl;
      std::cin >> wybor;
      if (wybor == 1)
      {
        k = Kolejnosc::x;
        ruch(k);
      }
      else
      {
        if(wybor == 2)
        {
          k = Kolejnosc::o;
          ruch(k);
        }
        else
        {
          std::cout << "Blad! Wybrano niewlasciwa opcje. Sprobuj ponownie." << std::endl;
          poczatek();
        }
      }
    }
    void wypisanie()
    {
      char znak;
      for(int i=0; i<3; i++)
      {
        for(auto j : plansza.at(i))
        {
          if(j==Kolejnosc::p)
          {
            znak = 'p';
          }
          else
          {
            if(j==Kolejnosc::x)
            {
              znak = 'x';
            }
            else
            {
              znak = 'o';
            }
          }
          std::cout.width(3);
          std::cout << znak;
        }
        std::cout << std::endl;
      }
      std::cout << "Legenda:" << std::endl;
      std::cout << "p - Puste pole" << std::endl;
      std::cout << "o - Kolko" << std::endl;
      std::cout << "x - Krzyzyk" << std::endl;
    }
    void ruch(Kolejnosc k)
    {
      int kolumna, wiersz;
      wypisanie();
      std::cout << "Numery kolumn od lewej do prawej - 1, 2, 3" << std::endl;
      std::cout << "Numery wierszy z gory na dol - 1, 2, 3" << std::endl;
      std::cout << "W ktorym wierszu chcesz wykonac ruch?" << std::endl;
      std::cin >> wiersz;
      boundCheck(wiersz, k);
      std::cout << "W ktorej kolumnie chcesz wykonac ruch?" << std::endl;
      std::cin >> kolumna;
      boundCheck(kolumna, k);
      if(plansza.at(wiersz-1).at(kolumna-1)==Kolejnosc::p)
      {
        plansza.at(wiersz-1).at(kolumna-1) = k;
        if(k == Kolejnosc::x)
        k=Kolejnosc::o;
        else
        k=Kolejnosc::x;
        wynik(k);
      }
      else
      {
        std::cout << "Blad! Pole zajete, sprobuj ponownie!" << std::endl;
        ruch(k);
      }
    }
    void boundCheck(int check, Kolejnosc k)
    {
      if(check != 1 && check != 2 && check != 3)
      {
        std::cout << "Blad! Podano bledny numer. Sprobuj ponownie." << std::endl;
        ruch(k);
      }
    }
    bool sprawdzenie()
    {
      for(int i = 0; i<3; i++)
      {
          if(plansza.at(0).at(i)==plansza.at(1).at(i)
          && plansza.at(0).at(i)==plansza.at(2).at(i)
          && plansza.at(0).at(i)!=Kolejnosc::p)
          return true;
          else
          {
              if(plansza.at(i).at(0)==plansza.at(i).at(1)
              && plansza.at(i).at(0)==plansza.at(i).at(2)
              && plansza.at(i).at(0)!=Kolejnosc::p)
              return true;
              else
              {
                  if(plansza.at(0).at(0)==plansza.at(1).at(1)
                  && plansza.at(0).at(0)==plansza.at(2).at(2)
                  && plansza.at(0).at(0)!=Kolejnosc::p)
                  return true;
                  else
                  {
                      if(plansza.at(0).at(2)==plansza.at(1).at(1)
                      && plansza.at(0).at(2)==plansza.at(2).at(0)
                      && plansza.at(0).at(2)!=Kolejnosc::p)
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
    void wynik(Kolejnosc k)
    {
      if(sprawdzenie() == true)
      {
        if (k == Kolejnosc::o)
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
      ruch(k);
    }
};

int main()
{
  TicTacToe gra;
  gra.poczatek();
}
