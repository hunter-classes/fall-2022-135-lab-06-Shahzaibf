#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

// add your tests here
TEST_CASE("Caesar Shifts"){
    CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
    CHECK(encryptCaesar("To be or not to be, That is the question", 9) == "Cx kn xa wxc cx kn, Cqjc rb cqn zdnbcrxw");
}

TEST_CASE("Vigenere Cipher"){
    CHECK(encryptVigenere("Goodnight", "moon") == "Sccqzwuuf");
    CHECK(encryptVigenere("I LOVE CODE!","love") == "T ZJZP QJHP!");
}

TEST_CASE("DECRYPTIONS"){
    CHECK(decryptCaesar("Dtwgpc Xzzy.", 11) == "Silver Moon.");
    CHECK(decryptVigenere("Vpa krpi.", "decode") == "Sly wolf.");
}