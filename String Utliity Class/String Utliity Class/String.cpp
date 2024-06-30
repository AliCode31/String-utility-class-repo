#include "String.h"
#include <iostream>
#include <cstring>

String::String()
{
	
}

String::String(const char* _str)
{
	str = _str;

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


