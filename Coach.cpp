#include "Coach.h"
#include "Person.h"
#include <sstream>
#include <string>
using std::string;
using std::stringstream;
Coach::Coach(){

}
Coach::Coach(string nombre,string apellido,string apodo,int nivel, string tactica):Person(nombre,apellido,apodo,nivel){
	tactic = tactica;
}
void Coach::setTactic(string tactica){
	tactic = tactica;
}
string Coach::getTactic(){
	return tactic;
}
Coach::~Coach(){

}
string Coach::toString(){
	stringstream ss;
	ss<<"Nombre: " << name <<"; Apellido: "<< surname <<"; Sobrenombre: "<< nickname <<"; Nivel: "<< level <<"; Táctica: "<< tactic <<";";
	return ss.str();

}