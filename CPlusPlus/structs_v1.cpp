#include <stdio.h>
#include <iostream>
#include <string>
//----------------Global Scope-------------------//

const int someInt = 10;

typedef struct someStruct{
    char someChar;
    int someInt;
    short someShort;
    const char* someString;
    const char* otherString;
    float someFloat;
} structure;

//----------------Global Scope-------------------//

int main(){      // Entry point to whole program, goes to .global section of obj file
    
    structure shitness;
    shitness.someString = "Asshole";
    shitness.someString = "MOtherfucker";
    const char* str = shitness.someString;
    structure strArray [10];
    std::cout << str << std::endl;
    
    std::string mStr = " str";
    std::string myString = "My First String" + mStr;
    std::cout << myString.size() << std::endl;
    std::cout << myString.length() << std::endl;
    std::cout << myString.data() << std::endl;
    myString.append(" and some more string");
    std::cout << myString.data() << std::endl;
    
    return 0;
}
