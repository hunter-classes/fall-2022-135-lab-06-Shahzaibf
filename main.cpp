#include <iostream>
#include "caesar.h"
#include "vigenere.h"

int main()
{
  std::cout << encryptCaesar("Way to Go!", 5) << "\n";


  std::cout << encryptVigenere("Hello, World!", "cake") << "\n";
  return 0;
}
