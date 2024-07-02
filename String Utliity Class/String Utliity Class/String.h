#pragma once

class String {

	char* str;
	
public:

	String();
	String(const char* _str);



	~String();

	
	public:
		
    const char* CString();

	size_t Length();

	const char& CharacterAt(int index);
	
    bool EqualTo(const String& equalStr) const ;

	String& Append(const String& _str);
	//String& Prepend(const String& _str);

public:

	bool operator==(const String& _other);
	bool operator!=(const String& _other);
	bool operator<(const String& _other);

	char& operator[](size_t _index);
	const char& operator[](size_t _index) const;



};