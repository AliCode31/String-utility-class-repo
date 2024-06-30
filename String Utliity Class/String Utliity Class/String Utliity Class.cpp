#include <iostream>
#include "String.h"

int main()
{
    String* text = new String("Hello World");
    String* text2 = new String("Hello Void");
    std::cout << text2->CString() << text->CString() << std::endl;

 
    
}

