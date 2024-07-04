#include "String.h"
#include <iostream>
#include <cstring>
#include <exception>

#define SIZE_T_MAX ((size_t)-1)


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

size_t String::Find(const String& _str)
{
	size_t _strLength = strlen(_str.str) +1;
	char* tempStr = new char[_strLength];
	tempStr[0] = '\0';

	//Turns the string into a char array
	for (int i = 0; i < _strLength; i++) {
		tempStr[i] = _str.str[i];	    
	}
 
	// Finds the string
	size_t length = strlen(str) + 1;

	int a = 0;
	int b = 0;
	int c = 0;

	bool firstChar = true;
	while (b < length)
	{



		if (tempStr[a] != str[b])
		{
			firstChar = true;
			b++;
			a = 0;
			if (b >= length) 
			{
				break;
			}
			continue;
		}
		
		if (tempStr[a] == str[b]) 
		{
			if (firstChar) 
			{
				firstChar = false;
				c = b;
			}
			a++;
			b++;
			if (a == _strLength -1) 
			{
				return size_t(c);
			}
		}
		
	}
    

	delete tempStr;
	return size_t SIZE_T_MAX;
}

size_t String::Find(size_t _startIndex, const String& _str)
{

	size_t _strLength = strlen(_str.str) + 1;
	char* tempStr = new char[_strLength];
	tempStr[0] = '\0';

	//Turns the string into a char array
	for (int i = 0; i < _strLength; i++) {
		tempStr[i] = _str.str[i];
	}

	// Finds the string
	size_t length = strlen(str) + 1;

	
	int a = 0;
	int b = _startIndex;
	int c = 0;

	bool firstChar = true;
	while (b < length)
	{



		if (tempStr[a] != str[b])
		{
			firstChar = true;
			b++;
			a = 0;
			if (b >= length)
			{
				break;
			}
			continue;
		}

		if (tempStr[a] == str[b])
		{
			if (firstChar)
			{
				firstChar = false;
				c = b;
			}
			a++;
			b++;
			if (a == _strLength - 1)
			{
				return size_t(c);
			}
		}

	}


	delete tempStr;
	return size_t SIZE_T_MAX;
}

String& String::Replace(const String& _strFind, const String& _replaceStr)
{
	size_t _strLength = strlen(_strFind.str) + 1;
	char* tempStr = new char[_strLength];
	tempStr[0] = '\0';

	//Turns the string into a char array
	for (int i = 0; i < _strLength; i++) {
		tempStr[i] = _strFind.str[i];
	}

	// Finds the string
	size_t length = strlen(str) + 1;
	size_t replaceLength = strlen(_replaceStr.str) + 1;

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	bool firstChar = true;
	bool setStr = true;


	char* tempMainStr = str;
	;
	while (b < length)
	{
		//Replacing the string
		if (d > 0) 		
		{
			
			for (int i = 0; i < replaceLength; i++)
			{
				if (i == replaceLength - 1)
				{					
					str = new char[length];
					str[0] = '\0';
					strcat_s(str, length, tempMainStr);
					d--;
					setStr = false;
				}
				str[b] = _replaceStr[i];
				b++;
				size_t length = strlen(str) + 1;
				if (setStr) 
				{
					tempMainStr = str;
				}
			}
			if (!setStr)
			{
				str = new char[length];
				str[0] = '\0';
				strcat_s(str, length, tempMainStr);
				
			}
			b = 0;
			c = 0;
			setStr = true;
		}




		if (tempStr[a] != str[b])
		{
			firstChar = true;
			b++;
			a = 0;
			if (b >= length)
			{
				break;
			}
			continue;
		}

		if (tempStr[a] == str[b])
		{
			if (firstChar)
			{
				firstChar = false;
				c = b;
			}
			a++;
			b++;
			if (a == _strLength - 1)
			{
				d++;
				b = c;

			}
		}

	}


	delete tempStr;
	return *this;
}

const char* String::CString()

{

	return str;
}

String& String::ReadFromConsole()
{
	std::cin >> str;

	return *this;
}

String& String::WriteToConsole()
{
	std::cout << str;

	return *this;
}

String& String::Uppercase()
{
	int length = strlen(str) + 1;
	
	_strupr_s(str, length);
	return *this;
}

String& String::Lowercase()
{
	int length = strlen(str) + 1;
	_strlwr_s(str, length);
	return *this;
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
	char* tempStr = str;

	int length = strlen(_str.str) + strlen(str) + 1;
	str = new char[length];
	str[0] = '\0';
	
	
    strcat_s(str, length, tempStr);
	strcat_s(str, length, _str.str);



	return *this;

}

String& String::Prepend(const String& _str)
{
	char* tempStr = str;

	int length = strlen(_str.str) + strlen(str) + 1;
	str = new char[length];
	str[0] = '\0';
	
	
    strcat_s(str, length, _str.str);
	strcat_s(str, length, tempStr);



	return *this;
}

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

String& String::operator=(const String& _other)
{
	int length = strlen(_other.str) + 1;
	str = new char[length];
	strcpy_s(str, length, _other.str);


	return *this;
}





char& String::operator[](size_t _index)
{
	
	if (_index > strlen(str) || _index < 0)
		throw std::out_of_range("Out of range");

	else
	return (str)[_index];
}

const char& String::operator[](size_t _index) const
{

	if (_index > strlen(str) || _index < 0)
		throw std::out_of_range("Out of range");

	else
	return (str)[_index];
}






