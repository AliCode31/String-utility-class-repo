#include <iostream>
#include "String.h"
#include  <string>

int main()
{
    String* text = new String("sftsdftdsfstdfgstsdgftsdfdsdtsdrtgrdfrgdy ");
    String* text2 = new String("t");
    
    String* text3 = new String("0");
    text->WriteToConsole();
    std::cout << "\n";
    text->Replace(*text2, *text3);
    std::cout << "\n";
    text->WriteToConsole();
    

 
    delete text;
    delete text2;
}

