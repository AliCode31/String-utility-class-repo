#include <iostream>
#include "String.h"
#include  <string>

int main()
{
 


    String* text = new String(); 

    String* text2 = new String("Abandoning");
    
    String* text3 = new String("Spiderman");

    std::cout << "                   Testing results for String Class\n\n\n";

    std::cout <<"________________________" << __TIME__ << " " << __DATE__ << "_________________________" << "\n\n\n";


    std::cout << "Testing......String():\n";


    if (text->TestSetStringNoValue()) {
        std::cout << "String() with no value is [Successful]\n\n";

    } else std::cout << "String() with no value has [Failed]\n\n";
     


    std::cout << "Testing......String(\"string with value\"):\n";
    if (text->TestSetStringValue()) {
        std::cout << "String(\"string with value\") with no value is [Successful]\n\n";

    }
    else std::cout << "String(\"string with value\") with value has [Failed]\n\n";



    std::cout << "Testing......Length():\n";
    if (text2->TestLength()) {
        std::cout << "Length() is [Successful]\n\n";

    }
    else std::cout << "Length() has [Failed]\n\n";



    std::cout << "Testing......CharacterAt()):\n";
    if (text2->TestCharacterAt()) {
        std::cout << "CharacterAt() is [Successful]\n\n";

    }
    else std::cout << "CharacterAt() has [Failed]\n\n";



    std::cout << "Testing......EqualTo()):\n";
    if (text2->TestEqualTo()) {
        std::cout << "EqualTo() is [Successful]\n\n";

    }
    else std::cout << "EqualTo() has [Failed]\n\n";

   
 
    delete text;
    delete text2;
}

