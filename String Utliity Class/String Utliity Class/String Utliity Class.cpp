#include <iostream>
#include "String.h"

int main()
{
    String* text = new String("Hello world");
    String* text2 = new String("Hello Void");
    std::cout << text->CharacterAt(10) << std::endl;

 
    
}

