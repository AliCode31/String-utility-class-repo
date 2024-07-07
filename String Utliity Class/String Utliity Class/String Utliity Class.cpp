#include <iostream>
#include "String.h"
#include  <string>

int main()
{
    String* text = new String("Cats Dogs"); 

    String* text2 = new String("Hello");
    
    String* text3 = new String("Spiderman");

    text->WriteToConsole();
    std::cout << "\n";
    text->Replace(*text2, *text3);
    std::cout << "\n";
    text->WriteToConsole();

    
    
    /*if (text->TestSetStringValue()) {
        std::cout << "Constructor with no value is Successful\n";

    } else std::cout << "Constructor with no value has Failed\n";*/


 
    delete text;
    delete text2;
}

