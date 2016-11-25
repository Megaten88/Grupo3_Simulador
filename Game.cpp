#include "Game.h"
#include "Team.h"

Team* Game::getTeam_1(){
	return team_1;
}

void Game::setTeam_1(Team* team_1){
	this->team_1=team_1;
}

Team* Game::getTeam_2(){
	return team_2;
}

void Game::setTeam_2(Team*){
	this->team_2=team_2;
}

int Game::getScore_1(){
	return score_1;
}

void Game::setScore_1(int score_1){
	this->score_1 =score_1;
}

int Game::getScore_2(){
	return score_2;
}

void Game::setScore_2(int score_2){
	this-> score_2 = score_2;
}

Team* Game::getWinner(){
	return winner;
}

void Game::setWinner(Team* winner){
	this->winner = winner;
}

Team* Game::getLocal(){
	return local;
}

void Game::setLocal(Team* local){
	this->local=local;
}
	
Game::Game(){

}

Game::Game(Team* team_1, Team* team_2, int score_1, int score_2, Team* winner,Team* local ){
	this->team_1 = team_1;
	this->team_2 = team_2;
	this->score_1 = score_1;
	this->score_2 = score_2;
	this->winner = winner;
	this->local = local;
}

