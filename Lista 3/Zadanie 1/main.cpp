#include <iostream>
#include <vector>

bool match(const std::string& pattern, const std::string& s)
{
  if(pattern == s)
  return true;
  else
  return false;
}

int main()
{
  std::cout << "Program sprawdzajacy, czy lancuch znakow pasuje do wzorca:" << std::endl;
  std::string wzorzec, lancuch;
  std::cout << "Podaj wzorzec:" << std::endl;
  std::cin >> wzorzec;
  std::cout << std::endl;
  std::cout << "Podaj lancuch znakow:" << std::endl;
  std::cin >> lancuch;
  std::cout << std::endl;
  if(match(wzorzec, lancuch) == true)
    std::cout << "Lancuch pasuje do wzorca." << std::endl;
  else
    std::cout << "Lancuch nie pasuje do wzorca" << std::endl;
}
