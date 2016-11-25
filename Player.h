#pragma once
#include "Person.h"
#include <string>
#include <iostream>

using std::string;

class Player: public Person{

private:
        string position;
public:
        Player();
        Player(string, string, string, int, string);
        ~Player();
        void setPosition(string);
        string getPosition();

};
