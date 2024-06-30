#include <iostream>
#include "String.h"

int main()
{
    String* text = new String();
    

    std::cout << text->CStr();
}

