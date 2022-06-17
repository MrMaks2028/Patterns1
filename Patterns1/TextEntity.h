#pragma once
#include <iostream>
#include <string>
class TextEntity{
public:
	void setData(std::string data);
	void getData(std::string data);
	void changeCursor(int pos);
	void addSymbol(int symb);
	void removeSymbol();
	void replaceSymbol(char symb);

private:
	std::string _text;
	int cursor;
};

