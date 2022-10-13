#include <iostream>
#include "caesar.h"

char shiftChar(char c, int rshift){
    int newc = c + rshift;
    if(c >= 65 && c <= 90){
        if(newc < 65){
            return newc + 26;
        }
        if(newc > 90){
            return newc - 26;
        }
        return newc;
    }
    if(c >= 97 && c <= 122){
        if(newc < 97){
            return newc + 26;
        }
        if(newc > 122){
            return newc - 26;
        }
        return newc;
    }
    return c;
}

std::string encryptCaesar(std::string plaintext, int rshift){
    std::string result;
    for (int i = 0; i < plaintext.length();i++){
        result += shiftChar(plaintext[i],rshift);
    }
    return result;
}