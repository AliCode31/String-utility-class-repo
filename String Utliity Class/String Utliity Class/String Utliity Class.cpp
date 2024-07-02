#include <iostream>
#include "String.h"

int main()
{
    String* text = new String("Hello");
    String* text2 = new String("Hfllo");
    

    
  
    if (text->operator<(*text2)) {
        std::cout << "It is less then";
    }
    else {
        std::cout << "It is not";
    }
    
    
    //std::cout << text->CString();
    
   
 
    delete text;
    delete text2;
}

