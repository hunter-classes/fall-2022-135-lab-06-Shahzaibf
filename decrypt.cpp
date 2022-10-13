#include <iostream>
#include "decrypt.h"
#include "caesar.h"

std::string decryptCaesar(std::string ciphertext, int rshift) {
    std::string result;
    for(int i = 0;i < ciphertext.length(); i++){
        result+= shiftChar(ciphertext[i], rshift * -1);
    }
    return result;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword){
    std::string result;
    char letters[keyword.length()];
    for(int i = 0; i < keyword.length(); i++){
        letters[i] = keyword[i];
    }
    int count = -1;
    for(int i = 0; i < ciphertext.length();i++){
        if(isalpha(ciphertext[i])){
            count++;
            result += shiftChar(ciphertext[i], (((int)letters[count % keyword.length()] - 97) * -1));
        } else{
            result += ciphertext[i];
        }
    }
    return result;
}