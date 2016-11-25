#pragma once
#include "Team.h"
class Game
{
private:
	Team* team_1;
	Team* team_2;
	int score_1;
	int score_2;
	Team* winner;
	Team* local;
public:
	Team* getTeam_1();
	void setTeam_1(Team*);
	Team* getTeam_2();
	void setTeam_2(Team*);
	int getScore_1();
	void setScore_1(int);
	int getScore_2();
	void setScore_2(int);
	Team* getWinner();
	void setWinner(Team*);
	Team* getLocal();
	void setLocal(Team*);
	Game();
	~Game();
	
};