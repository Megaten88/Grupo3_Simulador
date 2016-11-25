#include "Coach.h"
#include "Person.h"
#include <string>
using std::string;
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