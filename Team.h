#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Coach.h"

class Team
{
private:
	string t_name;
	Coach* t_coach;
	int def_lvl;
	double atk_lvl;
	int goals_if;
	int goals_a;
	std::vector<Player*> P_list;

public:
	Team();
	string getT_Name();
	void setT_Name(string);
	Coach* getT_coach();
	void setT_coach(Coach*);
	int getDef_lvl();
	void setDef_lvl(int);
	double getAtk_lvl();
	void setAtk_lvl(double);
	int getGoal_if();
	void setGoal_if(int);
	int getGoal_a();
	void setGoal_a(int);
	void addPlayer(Player*);
	Team(string, Coach* , int, double, int, int);
	~Team();
	
};