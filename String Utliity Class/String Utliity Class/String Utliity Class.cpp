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



    std::cout << "Testing......CharacterAt():\n";
    if (text2->TestCharacterAt()) {
        std::cout << "CharacterAt() is [Successful]\n\n";

    }
    else std::cout << "CharacterAt() has [Failed]\n\n";



    std::cout << "Testing......EqualTo():\n";
    if (text2->TestEqualTo()) {
        std::cout << "EqualTo() is [Successful]\n\n";

    }
    else std::cout << "EqualTo() has [Failed]\n\n";



    std::cout << "Testing......Append()\n";
    if (text2->TestAppend()) {
        std::cout << "Append() is [Successful]\n\n";

    }
    else std::cout << "Append() has[Failed]\n\n";



    std::cout << "Testing......Prepend():\n";
    if (text2->TestPrepend()) {
        std::cout << "Prepend() is [Successful]\n\n";

    }
    else std::cout << "Prepend() has [Failed]\n\n";
   
    

    std::cout << "Testing......Find():\n";
    if (text2->TestFind()) {
        std::cout << "Find() is [Successful]\n\n";

    }
    else std::cout << "Find() has [Failed]\n\n";



    std::cout << "Testing......Find(\"with index\"):\n";
    if (text2->TestFindWithStartIndex()) {
        std::cout << "Find(\"with index\") is [Successful]\n\n";

    }
    else std::cout << "Find(\"with index\") has [Failed]\n\n";



    std::cout << "Testing......Replace():\n";
    if (text2->TestReplace()) {
        std::cout << "Replace() is [Successful]\n\n";

    }
    else std::cout << "Replace() has [Failed]\n\n";



    std::cout << "Testing......CString()=======: ";
    if (text2->TestCString()) {

        std::cout << "CString() is [Successful]\n\n";
    }
   

  void TestReadFromConsole();
    {
        std::cout << "Testing......ReadFromConsole(): Please type in \"Hello!\" \n";
        text3->ReadFromConsole();
        
        if (*text3 == "Hello!") {
            std::cout << "ReadFromConsole() is [Successful]\n\n";
        }
        else std::cout << "ReadFromConsole() has [Failed]\n\n";
    }



    std::cout << "Testing......WriteToConsole()=======: ";
    if (text2->TestWriteToConsole()) {

        std::cout << "WriteToConaole() is [Successful]\n\n";
    }



    std::cout << "Testing......Uppercase():\n";
    if (text2->TestUppercase()) {
        std::cout << "Uppercase() is [Successful]\n\n";

    }
    else std::cout << "Uppercase() has [Failed]\n\n";



    std::cout << "Testing......Lowercase():\n";
    if (text2->TestLowercase()) {
        std::cout << "Lowercase() is [Successful]\n\n";

    }
    else std::cout << "Lowercase() has [Failed]\n\n";
 
    delete text;
    delete text2;
    delete text3;
}

