#pragma once
#include <string>
using std::string;
class Person
{
protected:
	string name;
	string surname;
	string nickname;
	int level;
public:
	Person();
	void setName(string);
	string getName();
	void setSurname(string);
	string getSurname();
	void setNickname(string);
	string getNickname();
	void setLevel(int);
	int getLevel();
	~Person();
	
};