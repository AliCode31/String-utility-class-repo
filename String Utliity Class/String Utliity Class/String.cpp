#include "String.h"
#include <iostream>
#include <cstring>
#include <sstream>
#include <exception>

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
	
	
	char* append = nullptr;
	
	//*append = str 

	//append = *str + *_str.str;
	*append = strcat_s(str, length, _str.str);
	str = new char[length];
	
	strcpy_s(str,length, append);


	return *this;

}





//String& String::Prepend(const String& _str)
//{
//	
//}











bool String::operator==(const String& _other)
{
	if (strcmp(str, _other.str) == 0)
		return true;

	else return false;
}

bool String::operator!=(const String& _other)
{
	if (strcmp(str, _other.str) != 0)
		return true;
	return false;
}

bool String::operator<(const String& _other)
{
	if (str < _other.str) return true;
	else return false;
}






char& String::operator[](size_t _index)
{
	
	if (_index > strlen(str) || _index > strlen(str))
		throw std::out_of_range("Out of range");

	else
	return (str)[_index];
}

const char& String::operator[](size_t _index) const
{

	if (_index > strlen(str) || _index > strlen(str))
		throw std::out_of_range("Out of range");

	else
	return (str)[_index];
}






