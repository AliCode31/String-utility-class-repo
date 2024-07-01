#include <iostream>
#include "String.h"

int main()
{
    String* text = new String("Hello world");
    String* text2 = new String("Buh bye world");
    
  
    
     text->Append(*text2);
    
     std::cout << text->CString();

   
 
    delete text;
    delete text2;
}

