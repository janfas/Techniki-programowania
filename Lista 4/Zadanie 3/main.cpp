#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <iterator>

std::map<std::string, std::string> wpis;

void interfejs(std::string zrodloPliku);

void wprowadzanie(std::string zrodloPliku)
{
  std::string imie, email;
  std::cout << "Podaj imie:" << std::endl;
  std::cin >> imie;
  std::cout << "Podaj email:" << std::endl;
  std::cin >> email;
  wpis.insert(std::pair<std::string, std::string>(imie, email));
  std::cout << "Zakonczono wprowadzanie wpisu" << std::endl;
  interfejs(zrodloPliku);
}

void usuwanie(std::string zrodloPliku)
{
  std::string klucz;
  std::cout << "Podaj imie, ktore chcesz usunac?" << std::endl;
  std::cin >> klucz;
  std::map<std::string, std::string>::iterator i = wpis.find(klucz);
  wpis.erase(i);
  interfejs(zrodloPliku);
}

void zmienianie(std::string zrodloPliku)
{
  std::string wiersz, imie, email;
  std::cout << "W ktorym wierszu, chcesz zamienic wpis?" << std::endl;
  std::cin >> wiersz;
  std::map<std::string, std::string>::iterator i = wpis.find(wiersz);
  wpis.erase(i);
  std::cout << "Podaj imie:" << std::endl;
  std::cin >> imie;
  std::cout << "Podaj email:" << std::endl;
  std::cin >> email;
  wpis.insert(i, std::pair<std::string, std::string>(imie, email));
  interfejs(zrodloPliku);
}

void wyswietlanie(std::string zrodloPliku)
{
  std::string tekst;
  std::map<std::string, std::string>::iterator i;
  for(i = wpis.begin(); i != wpis.end(); ++i)
  {
  std::cout << "Imie: " << i -> first << "\t\tEmail: " << i -> second << std::endl;
  }
  std::cout << std::endl;
  std::cout << "Zakonczono wyswietlanie" << std::endl;
  interfejs(zrodloPliku);
}

void zakonczenie(std::string zrodloPliku)
{
  std::ofstream plik(zrodloPliku, std::ios::app);
  std::map<std::string, std::string>::iterator i;
  for(i = wpis.begin(); i != wpis.end(); ++i)
  {
  plik << "Imie: " << i -> first << "\t\tEmail: " << i -> second << std::endl;
  }
  plik.close();
  std::cout << "Zapisywanie do pliku zakonczone. Program zostanie wylaczony." << std::endl;
  exit(0);
}

void interfejs(std::string zrodloPliku)
{
  int wybor;
  std::cout << std::endl;
  std::cout << "Co chcesz zrobic?" << std::endl;
  std::cout << "1. Wprowadzic nowy wpis" << std::endl;
  std::cout << "2. Usunac wskazany wpis" << std::endl;
  std::cout << "3. Zmienic wskazany wpis" << std::endl;
  std::cout << "4. Wyswietlic dodane wpisy" << std::endl;
  std::cout << "5. Zapisac plik i zakonczyc dzialanie programu" << std::endl;
  std::cin >> wybor;
  switch(wybor)
  {
    case 1:
    wprowadzanie(zrodloPliku);
    case 2:
    usuwanie(zrodloPliku);
    case 3:
    zmienianie(zrodloPliku);
    case 4:
    wyswietlanie(zrodloPliku);
    case 5:
    zakonczenie(zrodloPliku);
    default:
    interfejs(zrodloPliku);
  }
}

int main()
{
  std::string zrodloPliku("ksiazkaadresowa.txt");
  std::ofstream plik(zrodloPliku, std::ios::app);
  if(plik)
  {
    std::cout << "Ksiazka adresowa" << std::endl;
    interfejs(zrodloPliku);
  }
  else
  {
    std::cout << "Blad! Nie mozna poprawnie otworzyc pliku!" << std::endl;
  }
}
