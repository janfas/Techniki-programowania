#include <iostream>
#include <vector>

class VectorInt
{
public:
    std::vector<int> ciag;

    VectorInt()
    {
      ciag.reserve(16);
    }

    ~VectorInt()
    {
      std::cout << "Ciag zostal usuniety!" << std::endl;
    }

    VectorInt(int elementy)
    {
      int _elementy=elementy;
      ciag.reserve(_elementy);
    }

    VectorInt(VectorInt &);

    friend std::ostream & operator << (std::ostream &out, const VectorInt &ciag);

    void wyswietl()
    {
      int pozycja;
      std::cout << "Wartosc na ktorej pozycji chcesz wyswietlic?" << std::endl;
      std::cout << "Pozycje od 1 do podanej wielkosci ciagu (domyslnie 16)" << std::endl;
      std::cin >> pozycja;
      std::cout << std::endl;
      std::cout << "Wartosc ktora chcesz wyswietlic to: " << ciag.at(pozycja-1) << std::endl;
      std::cout << std::endl;
      interfejs();
    }

    void zmienic()
    {
      int pozycja, liczba;
      std::cout << "Wartosc na ktorej pozycji chcesz zmienic?" << std::endl;
      std::cout << "Pozycje od 1 do podanej wielkosci ciagu (domyslnie 16)" << std::endl;
      std::cin >> pozycja;
      std::cout << std::endl;
      std::cout << "Na jaka liczbe chcesz ja zmienic?" << std::endl;
      std::cin >> liczba;
      ciag.insert(ciag.begin(), pozycja-1, liczba);
      std::cout << std::endl;
      interfejs();
    }

    void dodac()
    {
      int wielkosc;
      std::cout << "Jaka wielkosc chcesz dodac na koniec ciagu?" << std::endl;
      std::cin >> wielkosc;
      ciag.push_back(wielkosc);
      std::cout << std::endl;
      interfejs();
    }

    void usunac()
    {
      ciag.pop_back();
      std::cout << "Ostatnia wartosc ciagu zostala usunieta!" << std::endl;
      std::cout << std::endl;
      interfejs();
    }

    void zmniejszyc()
    {
      ciag.shrink_to_fit();
      std::cout << "Pamiec zostala dostosowana do ilosci elementow." << std::endl;
      std::cout << std::endl;
      interfejs();
    }

    void usunacWszystko()
    {
      ciag.clear();
      std::cout << "Wszystkie elementy ciagu zostaly usuniete!" << std::endl;
      std::cout << std::endl;
      interfejs();
    }

    void iloscElementow()
    {
      std::cout << "W ciagu znajduje sie " << ciag.size() << " elementow" << std::endl;
      std::cout << std::endl;
      interfejs();
    }

    void przechowywanie()
    {
      std::cout << "W ciagu mozna przechowywac " << ciag.capacity() << " elementow" << std::endl;
      std::cout << std::endl;
      interfejs();
    }

    void wypisanie()
    {
      std::cout << "Wypisanie elementow ciagu:" << std::endl;
      for(auto i : ciag)
        {
          std::cout << i << std::endl;
        }
        std::cout << std::endl;
        interfejs();
    }

    void interfejs()
    {
      int wybor;
      std::cout << "Co chcesz zrobic?" << std::endl;
      std::cout << "1. Wyswietlic wartosc na wskazanej pozycji" << std::endl;
      std::cout << "2. Zmienic wartosc na wskazanej pozycji" << std::endl;
      std::cout << "3. Dodac wartosc na koniec ciagu" << std::endl;
      std::cout << "4. Usunac wartosc na koncu ciagu" << std::endl;
      std::cout << "5. Zmniejszyc pamiec, aby dostosowac ja do aktualnej ilosci elementow" << std::endl;
      std::cout << "6. Usunac wszystkie elementy ciagu" << std::endl;
      std::cout << "7. Dowiedziec sie ile elementow znajduje sie w ciagu" << std::endl;
      std::cout << "8. Dowiedziec sie ile elementow mozna przechowywac w ciagu" << std::endl;
      std::cout << "9. Wypisac elementy ciagu" << std::endl;
      std::cout << "10. Zakonczyc dzialanie programu" << std::endl;
      std::cin >> wybor;
      std::cout << std::endl;
      switch(wybor)
      {
        case 1:
          wyswietl();
          break;

        case 2:
          zmienic();
          break;

        case 3:
          dodac();
          break;

        case 4:
          usunac();
          break;

        case 5:
          zmniejszyc();
          break;

        case 6:
          usunacWszystko();
          break;

        case 7:
          iloscElementow();
          break;

        case 8:
          przechowywanie();
          break;

        case 9:
          wypisanie();
          break;

        case 10:
          break;
      }
    }
};

int main()
{
  int wybor;
  std::cout << "Klasa przechowujaca ciag liczb rzeczywistych:" << std::endl;
  std::cout << std::endl;
  std::cout << "Okresl wielkosc ciagu:" << std::endl;
  std::cout << "1. Domyslna (16 liczb)" << std::endl;
  std::cout << "2. Wlasna" << std::endl;
  std::cin >> wybor;
  std::cout << std::endl;
  switch(wybor)
  {
    case 1:
    {
      VectorInt tworzenie;
      tworzenie.interfejs();
      break;
    }
    case 2:
    {
      int wielkosc;
      std::cout << "Podaj wielkosc ciagu:" << std::endl;
      std::cin >> wielkosc;
      VectorInt tworzenie(wielkosc);
      tworzenie.interfejs();
      break;
    }
  }
}
