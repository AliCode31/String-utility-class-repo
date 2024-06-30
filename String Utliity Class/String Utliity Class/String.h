#pragma once

class String {
public:

	String();
	String(const char* _str);

	String(String& const other);

	~String();

	
	public:
		const char* CStr() const;







};