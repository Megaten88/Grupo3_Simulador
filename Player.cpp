#include "Player.h"
#include <sstream>
#include <iostream>
using std::stringstream;
Player::Player(){

}

Player::Player(string nombre, string apellido, string apodo, int nivel, string posicion): Person(nombre,apellido,apodo,nivel){
    this->position = posicion;
}

Player::~Player(){
    std::cout << "bye player" << std::endl;
}

void Player::setPosition(string posicion){
    this->position = posicion;
};

string Player::getPosition(){
    return position;
}

string Player::toString(){
	stringstream ss;
	ss<<"Nombre: " << name <<"; Apellido: "<< surname <<"; Sobrenombre: "<< nickname <<"; Nivel: "<< level <<"; Posición: "<< position <<";"<<endl;
	return ss.str();
}
