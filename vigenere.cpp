#include <iostream>
#include "vigenere.h"
#include "caesar.h"

std::string encryptVigenere(std::string plaintext, std::string keyword) {
    int count = 0;
    std::string result;
    for(int i = 0; i < plaintext.size(); i++) {
        char letter;
        char current = plaintext[i];
        if(isalpha(current)) {
            char key = keyword[count];
            letter = shiftChar(current, key-'a');
            count++;
            count = count % keyword.size();
        } else {
            letter = current;
        }
        result += letter;
      }
    return result;
}
