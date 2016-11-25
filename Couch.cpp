#include "Couch.h"
#include "Person.h"
#include <string>
using std::string;
Couch::Couch(){

}
Couch::Couch(string nombre,string apellido,string apodo,int nivel, string tactica):Person(nombre,apellido,apodo,nivel){
	tactic = tactica;
}
void Couch::setTactic(string tactica){
	tactic = tactica;
}
string Couch::getTactic(){
	return tactic;
}
Couch::~Couch(){

}