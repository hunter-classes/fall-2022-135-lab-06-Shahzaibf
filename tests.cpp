#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"

TEST_CASE("Caesar Shifts"){
    CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
    CHECK(encryptCaesar("To be or not to be, That is the question", 9) == "Cx kn xa wxc cx kn, Cqjc rb cqn zdnbcrxw");
}
// add your tests here
