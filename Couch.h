#pragma once
#include "Person.h"
#include <string>
using std::string;

class Couch: public Person
{
private:
	string tactic;
public:
	Couch();
	Couch(string,string,string,int,string);
	void setTactic(string);
	string getTactic();
	~Couch();	
};