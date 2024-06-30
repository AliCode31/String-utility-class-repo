#include <iostream>
#include "String.h"

int main()
{
    String* text = new String("Hello world");

    std::cout << text->CString();

    
    
}

