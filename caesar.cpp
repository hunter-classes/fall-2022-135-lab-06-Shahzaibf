#include <iostream>
#include "caesar.h"

char shiftChar(char c, int rshift){
    int shiftedc = c + rshift;
    if(c >= 65 && c <= 90){
        if(shiftedc < 65){
            return shiftedc + 26;
        }
        if(shiftedc > 90){
            return shiftedc - 26;
        }
        return shiftedc;
    }
    if(c >= 97 && c <= 122){
        if(shiftedc < 97){
            return shiftedc + 26;
        }
        if(shiftedc > 122){
            return shiftedc - 26;
        }
        return shiftedc;
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