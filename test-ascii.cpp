#include <iostream>

int main() {
  std::string input;
  std::cout << "Input: ";
  while(getline(std::cin,input)){
    char letter;
    for (int i = 0; i < input.length(); i++) {
      std::cout << input[i] << " ";
      letter = input[i];
      std::cout << (int)letter << "\n";
    }
  }
}