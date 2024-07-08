#include <iostream>
#include "String.h"
#include <fstream>
int main()
{
    std::fstream fileTest;

    



    String* text = new String(); 

    String* text2 = new String("Abandoning");
    
    String* text3 = new String("Spiderman");




  
    std::cout  << "                   Testing results for String Class\n\n\n";

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
    else std::cout << "Append() has [Failed]\n\n";



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



    std::cout << "Testing......Operator==:\n";
    if (text2->TestOperatorEquals()) {
        std::cout << "Operator== is [Successful]\n\n";

    }
    else std::cout << "Operator== has [Failed]\n\n";
 


    std::cout << "Testing......Operator!=:\n";
    if (text2->TestOperatorNotEquals()) {
        std::cout << "Operator!= is [Successful]\n\n";

    }
    else std::cout << "Operator!= has [Failed]\n\n";



    std::cout << "Testing......Operator<:\n";
    if (text2->TestOperatorLessThan()) {
        std::cout << "Operator< is [Successful]\n\n";

    }
    else std::cout << "Operator< has [Failed]\n\n";



    std::cout << "Testing......Operator=:\n";
    if (text2->TestOperatorSet()) {
        std::cout << "Operator= is [Successful]\n\n";

    }
    else std::cout << "Operator= has [Failed]\n\n";




    std::cout << "Testing......Operator[]:\n";
    if (text2->TestOperatorSubscript()) {
        std::cout << "Operator[] is [Successful]\n\n";
         
    }
    else std::cout << "Operator[] has [Failed]\n\n";
    


    std::cout << "\nAll test results have been comepleted!";

  
    //----------------------TO FILE--------------------------------
    //----------------------TO FILE--------------------------------
    //----------------------TO FILE--------------------------------
    

    fileTest.open("Test Results.txt", std::ios::out);
    fileTest << "                   Testing results for String Class\n\n\n";

    fileTest << "________________________" << __TIME__ << " " << __DATE__ << "_________________________" << "\n\n\n";


    fileTest << "Testing......String():\n";


    if (text->TestSetStringNoValue()) {
        fileTest << "String() with no value is [Successful]\n\n";

    }
    else fileTest << "String() with no value has [Failed]\n\n";



    fileTest << "Testing......String(\"string with value\"):\n";
    if (text->TestSetStringValue()) {
        fileTest << "String(\"string with value\") with no value is [Successful]\n\n";

    }
    else fileTest << "String(\"string with value\") with value has [Failed]\n\n";



    fileTest << "Testing......Length():\n";
    if (text2->TestLength()) {
        fileTest << "Length() is [Successful]\n\n";

    }
    else fileTest << "Length() has [Failed]\n\n";



    fileTest<< "Testing......CharacterAt():\n";
    if (text2->TestCharacterAt()) {
        fileTest << "CharacterAt() is [Successful]\n\n";

    }
    else fileTest << "CharacterAt() has [Failed]\n\n";



    fileTest << "Testing......EqualTo():\n";
    if (text2->TestEqualTo()) {
        fileTest << "EqualTo() is [Successful]\n\n";

    }
    else fileTest << "EqualTo() has [Failed]\n\n";



    fileTest << "Testing......Append()\n";
    if (text2->TestAppend()) {
        fileTest << "Append() is [Successful]\n\n";

    }
    else fileTest << "Append() has [Failed]\n\n";



    fileTest << "Testing......Prepend():\n";
    if (text2->TestPrepend()) {
        fileTest << "Prepend() is [Successful]\n\n";

    }
    else fileTest << "Prepend() has [Failed]\n\n";



    fileTest << "Testing......Find():\n";
    if (text2->TestFind()) {
        fileTest << "Find() is [Successful]\n\n";

    }
    else fileTest << "Find() has [Failed]\n\n";



    fileTest << "Testing......Find(\"with index\"):\n";
    if (text2->TestFindWithStartIndex()) {
        fileTest << "Find(\"with index\") is [Successful]\n\n";

    }
    else fileTest << "Find(\"with index\") has [Failed]\n\n";



    fileTest << "Testing......Replace():\n";
    if (text2->TestReplace()) {
        fileTest << "Replace() is [Successful]\n\n";

    }
    else fileTest << "Replace() has [Failed]\n\n";



    fileTest << "Testing......CString()=======: ";
    if (text2->TestCString()) {

        fileTest << "CString() is [Successful]\n\n";
    }


    void TestReadFromConsole();
    {
        fileTest << "Testing......ReadFromConsole():";
        
        if (*text3 == "Hello!") {
            fileTest << "ReadFromConsole() is [Successful]\n\n";
        }
        else fileTest << "ReadFromConsole() has [Failed]\n\n";
    }



    fileTest << "Testing......WriteToConsole():\n";
    if (text2->TestWriteToConsole()) {

        fileTest << "WriteToConole() is [Successful]\n\n";
    }



    fileTest << "Testing......Uppercase():\n";
    if (text2->TestUppercase()) {
        fileTest << "Uppercase() is [Successful]\n\n";

    }
    else fileTest << "Uppercase() has [Failed]\n\n";



    fileTest << "Testing......Lowercase():\n";
    if (text2->TestLowercase()) {
        fileTest << "Lowercase() is [Successful]\n\n";

    }
    else fileTest << "Lowercase() has [Failed]\n\n";



    fileTest << "Testing......Operator==:\n";
    if (text2->TestOperatorEquals()) {
        fileTest << "Operator== is [Successful]\n\n";

    }
    else fileTest << "Operator== has [Failed]\n\n";



    fileTest << "Testing......Operator!=:\n";
    if (text2->TestOperatorNotEquals()) {
        fileTest << "Operator!= is [Successful]\n\n";

    }
    else fileTest << "Operator!= has [Failed]\n\n";



    fileTest << "Testing......Operator<:\n";
    if (text2->TestOperatorLessThan()) {
        fileTest << "Operator< is [Successful]\n\n";

    }
    else fileTest << "Operator< has [Failed]\n\n";



    fileTest << "Testing......Operator=\n";
    if (text2->TestOperatorSet()) {
        fileTest << "Operator= is [Successful]\n\n";

    }
    else fileTest << "Operator= has [Failed]\n\n";



    fileTest << "Testing......Operator[]:\n";
    if (text2->TestOperatorSubscript()) {
        fileTest << "Operator[] is[Successful]\n\n";

    }
    else fileTest << "Operator[] has [Failed]\n\n";



    fileTest << "\nAll test results have been cod!";

    fileTest.close();
    delete text;
    delete text2;
    delete text3;
}

