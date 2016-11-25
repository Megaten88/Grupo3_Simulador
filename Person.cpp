#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

Person::Person(){

}
Person::Person(string nombre, string apellido, string apodo, int nivel){
	name = nombre;
	surname = apellido;
	nickname = apodo;
	Person::setLevel(nivel);
}
void Person::setName(string nombre){
	name = nombre;
}
string Person::getName(){
	return name;
}
void Person::setSurname(string apellido){
	surname = apellido;
}
string Person::getSurname(){
	return surname;
}
void Person::setNickname(string apodo){
	nickname = apodo;
}
string Person::getNickname(){
	return nickname;
}
void Person::setLevel(int nivel){
	if (nivel >= 1 && nivel < =10)
	{
		level = nivel;
	}else{
		cout<<"El nivel se seteará a 1 por que se ingresó un nivel inválido"<<endl;
		level = 1;
	}
}
int Person::getLevel(){
	return level;
}
Person::~Person(){

}