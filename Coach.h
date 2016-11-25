#pragma once
#include "Person.h"
#include <string>
using std::string;

class Coach: public Person
{
private:
	string tactic;
public:
	Coach();
	Coach(string,string,string,int,string);
	void setTactic(string);
	string getTactic();
	~Coach();
	string toString();
};
