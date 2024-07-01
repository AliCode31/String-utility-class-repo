#include "String.h"
#include <iostream>
#include <cstring>
#include <sstream>

String::String()
{
	str = new char[1];
	str[0] = '\0';
}

String::String(const char* _str)
{
	int length = strlen(_str) + 1;
	str = new char[length];
	strcpy_s(str, length, _str);
}


String::~String()
{
	delete[] str;

}

const char* String::CString()

{

	return str;
}

size_t String::Length()
{		

	return size_t(strlen(str));
}

const char& String::CharacterAt(int index)
{
	


	return  (str[index]);
	
	
}


bool String::EqualTo(const String& equalStr) const
{
	if (strcmp(str, equalStr.str) == 0) {
		return true;
	}
	else {
		return false;
	}

	//return (strcmp(str, equalStr.str));

	
}

String& String::Append(const String& _str)
{
	int length = strlen(_str.str) + strlen(str) + 1;
	
	
	char append;
	
	//*append = str 

	//append = *str + *_str.str;
	append = strcat_s(str, length, _str.str);
	str = new char[length];
	
	strcpy_s(str,length, &append);


	return *this;

}

//String& String::Prepend(const String& _str)
//{
//	
//}

  


