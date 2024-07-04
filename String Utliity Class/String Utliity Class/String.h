#pragma once

class String {

	char* str;
	
public:

	String();
	String(const char* _str);



	~String();

	
	public:
		
    

	size_t Length();

	const char& CharacterAt(int index);
	
    bool EqualTo(const String& equalStr) const ;

	String& Append(const String& _str);
	String& Prepend(const String& _str);

	size_t Find(const String& _str);
	size_t Find(size_t _startIndex, const String& _str);
	String& Replace(const String& _strFind, const String& _replaceStr );



	const char* CString();
	String& ReadFromConsole();
	String& WriteToConsole();

	String& Uppercase();
	String& Lowercase();
public:

	bool operator ==(const String& _other);
	bool operator !=(const String& _other);
	bool operator <(const String& _other);

	String& operator=(const String& _other);

	char& operator [](size_t _index);
	const char& operator [](size_t _index) const;



};