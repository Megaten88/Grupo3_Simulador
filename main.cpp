#include "Person.h"
#include "Player.h"
#include "Coach.h"
#include "Team.h"
#include "Game.h"
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[]) {

    vector<Player*> jugadores;
    vector<Coach*> entrenadores;
    vector<Team*> equipos;
    vector<Game*> juegos;
    stringstream reporte;

    for (size_t i = 0; i < 44; i++) {
        Player* asd = new Player();

        asd->setName("Casco");
        asd->setLevel(rand() %10 +1);
        jugadores.push_back(asd);
        Coach* p = new Coach();
        p->setName("Mayra");
        p -> setLevel(rand()%10 +1);
        entrenadores.push_back(p);
    }

    //Player* asd = new Player();
    Player* asd = new Player();

    int opcion = 0 ;
    std::cout << "NOTA: Se generará el resumen a la hora de salir del programa :P " << std::endl;
    while (opcion !=  8){
        cout << "LAB# 6 :: GRUPO 3" << endl;
        cout << "1) Agregar jugadores" << endl;
        cout << "2) Agregar Coaches  " << endl;
        cout << "3) Agregar Equipos  " << endl;
        cout << "4) Asignar jugadores y Entrenador " << endl;
        cout << "5) Asignar equipos a juego  " << endl;
        cout << "6) Iniciar simulación  " << endl;

        std::cin >> opcion;

        string nombre;
        string apellido;
        string apodo;
        int nivel;

        if (opcion == 1) {
            string posicion;

            std::cout << "¡BIENVENIDO AL CREADOR DE JUGADORES!" << std::endl;
            std::cout << "Ingrese el nombre de su jugador: " << std::endl;
            cin>> nombre;
            std::cout << "Ingrese el apellido de su jugador: " << std::endl;
            cin>> apellido;
            std::cout << "Ingrese el apodo de su jugador: " << std::endl;
            cin>> apodo;
            std::cout << "Ingrese el nivel de su jugador:  " <<" valores [1-10] "  <<std::endl;
            cin>> nivel;
            std::cout << "Ingrese la posición de su jugador: " << std::endl;
            cin>> posicion;
            Player* nuevo = new Player(nombre,apellido,apodo,nivel,posicion);

            jugadores.push_back(nuevo);

        }

        if (opcion == 2) {
            string tactica;

            std::cout << "¡BIENVENIDO AL CREADOR DE ENTRENADORES!" << std::endl;
            std::cout << "Ingrese el nombre de su entrenador: " << std::endl;
            cin>> nombre;
            std::cout << "Ingrese el apellido de su entrenador: " << std::endl;
            cin>> apellido;
            std::cout << "Ingrese el apodo de su entrenador: " << std::endl;
            cin>> apodo;
            std::cout << "Ingrese el nivel de su entrenador:  " <<" valores [1-10] "  <<std::endl;
            cin>> nivel;
            std::cout << "Ingrese la táctica de su entrenador : " << std::endl;
            cin>> tactica;

            Coach* nuevo = new Coach(nombre,apellido,apodo,nivel,tactica);
            entrenadores.push_back(nuevo);

        }


        if (opcion == 3 ){
            /*
            int def_lvl;
        	double atk_lvl;
        	int goals_if;
        	int goals_a;
            */
            std::cout << "¡BIENVENIDO AL CREADOR DE EQUIPOS" << std::endl;
            std::cout << "Ingrese el nombre de su equipo: " << std::endl;
            cin>> nombre;
            std::cout << " PS : Recuerde agregar jugadores y un entrenador a su equipo."<< std::endl;

            Team* nuevo = new Team();
            nuevo->setT_Name(nombre);
            equipos.push_back(nuevo);
        }

        if (opcion == 4) {
            if(jugadores.size()> 10 && entrenadores.size() > 0 ){
                int select;
                int seleccionado;
                std::cout << "Hora de asignar jugadores a un equipo" << std::endl;

                cout << "Seleccione equipo a asignar: " << endl;

                for (int i = 0; i < equipos.size(); i++) {
                    Team * temp = equipos.at(i);
                    cout << i <<" >>> "<< temp->getT_Name() << endl;
                }
                cin>> select;

                std::cout << "Seleccione a su entrenador: " << std::endl;
                for (int i = 0; i < entrenadores.size(); i++) {
                    Coach * temp = entrenadores.at(i);
                    cout << i <<" >>> "<< temp->getName() << endl;
                }

                cin>> seleccionado;

                Coach* auxiliar = entrenadores.at(seleccionado);

                entrenadores.erase(entrenadores.begin() + seleccionado);


                int contador = 11;
                int seleccion;

                    while (contador > 0) {
                        std::cout << "Lista de jugadores Disponibles" << std::endl;
                        for (int i = 0; i < jugadores.size(); i++) {
                            Player * temp = jugadores.at(i);
                            cout << i <<" >>> "<< temp->getName() << endl;
                        }
                        std::cout << "Seleccione una opción" << std::endl;
                        cin>> seleccion;
                        Player* aux = jugadores.at(seleccion);
                        equipos.at(select)->addPlayer(aux);
                        jugadores.erase(jugadores.begin() + seleccion);
                        contador--;
                    }

            }else{
                cout << "Aun no se cumplen las condiciones para esta opción" << endl;
            }

        }
        if(opcion == 5){
            if (equipos.size() >= 4)
            {   
                int t1,t2,t3,t4;
                cout<<"----------LISTA DE EQUIPOS DISPONIBLES ----------"<<endl;
                for (int i = 0; i < equipos.size(); ++i)
                {
                    cout<<i<<") "<< equipos.at(i) -> getT_Name()<<endl;  
                }
                cout<<"Elija los 4 equipos separados por espacios. Ex: 1 2 3..etc. :";
                cin>>t1;
                cin>>t2;
                cin>>t3;
                cin>>t4;
                Team* team1 = equipos.at(t1);
                Team* team2 = equipos.at(t2);
                Team* team3 = equipos.at(t3);
                Team* team4 = equipos.at(t4);
                team1 -> setDef_lvl();
                team1 -> setAtk_lvl();
                team2 -> setDef_lvl();
                team2 -> setAtk_lvl();
                team3 -> setDef_lvl();
                team3 -> setAtk_lvl();
                team4 -> setDef_lvl();
                team4 -> setAtk_lvl();

                juegos.push_back(new Game(team1,team2));
                juegos.push_back(new Game(team3,team4));
                juegos.push_back(new Game(team1,team3));
                juegos.push_back(new Game(team2,team4));
                juegos.push_back(new Game(team1,team4));
                juegos.push_back(new Game(team2,team3));

                for (int i = 0; i < 5; ++i)
                {
                    int attack = rand() % 10 + 1;
                    int def = rand() %10 +1;
                    if ((attack * juegos.at(0)->getTeam_1() -> getAtk_lvl()) > (def* juegos.at(0)->getTeam_2()->getDef_lvl()))
                    {
                        juegos.at(0)->setScore_1( juegos.at(0) -> getScore_1() + 1);   
                    }else{
                        juegos.at(0)->setScore_2( juegos.at(0) -> getScore_2() + 1);
                    }
                }
                if (juegos.at(0)->setScore_1() > juegos.at(0)->setScore_2())
                {
                    reporte<<
                }
                for (int i = 0; i < 5; ++i)
                {
                    int attack = rand() % 10 + 1;
                    int def = rand() %10 +1;
                    if ((attack * juegos.at(1)->getTeam_1() -> getAtk_lvl()) > (def* juegos.at(1)->getTeam_2()->getDef_lvl()))
                    {
                        juegos.at(1)->setScore_1( juegos.at(1) -> getScore_1() + 1);   
                    }else{
                        juegos.at(1)->setScore_2( juegos.at(1) -> getScore_2() + 1);
                    }
                }
                for (int i = 0; i < 5; ++i)
                {
                    int attack = rand() % 10 + 1;
                    int def = rand() %10 +1;
                    if ((attack * juegos.at(2)->getTeam_1() -> getAtk_lvl()) > (def* juegos.at(2)->getTeam_2()->getDef_lvl()))
                    {
                        juegos.at(2)->setScore_1( juegos.at(2) -> getScore_1() + 1);   
                    }else{
                        juegos.at(2)->setScore_2( juegos.at(2) -> getScore_2() + 1);
                    }
                }
                for (int i = 0; i < 5; ++i)
                {
                    int attack = rand() % 10 + 1;
                    int def = rand() %10 +1;
                    if ((attack * juegos.at(3)->getTeam_1() -> getAtk_lvl()) > (def* juegos.at(3)->getTeam_2()->getDef_lvl()))
                    {
                        juegos.at(3)->setScore_1( juegos.at(3) -> getScore_1() + 1);   
                    }else{
                        juegos.at(3)->setScore_2( juegos.at(3) -> getScore_2() + 1);
                    }
                }
                for (int i = 0; i < 5; ++i)
                {
                    int attack = rand() % 10 + 1;
                    int def = rand() %10 +1;
                    if ((attack * juegos.at(4)->getTeam_1() -> getAtk_lvl()) > (def* juegos.at(4)->getTeam_2()->getDef_lvl()))
                    {
                        juegos.at(4)->setScore_1( juegos.at(4) -> getScore_1() + 1);   
                    }else{
                        juegos.at(4)->setScore_2( juegos.at(4) -> getScore_2() + 1);
                    }
                }
                for (int i = 0; i < 5; ++i)
                {
                    int attack = rand() % 10 + 1;
                    int def = rand() %10 +1;
                    if ((attack * juegos.at(5)->getTeam_1() -> getAtk_lvl()) > (def* juegos.at(5)->getTeam_2()->getDef_lvl()))
                    {
                        juegos.at(5)->setScore_1( juegos.at(5) -> getScore_1() + 1);   
                    }else{
                        juegos.at(5)->setScore_2( juegos.at(5) -> getScore_2() + 1);
                    }
                }
                delete team1;
                delete team2;
                delete team3;
                delete team4;
            }else{
                cout<<"No hay suficientes equipos para simular un torneo. "<<endl;
            }
        }
        if(opcion == 6){
        }
    }
    for (int i = 0; i < equipos.size(); ++i){
        equipos.erase(equipos.begin() + i);
    }
    equipos.clear();
    for (int i = 0; i <jugadores.size(); ++i){
       jugadores.erase(jugadores.begin() + i);
    }
    jugadores.clear();
    for (int i = 0; i < entrenadores.size(); ++i){
        entrenadores.erase(entrenadores.begin() + i);
    }
    entrenadores.clear();
    for (int i = 0; i < juegos.size(); ++i){
        juegos.erase(juegos.begin() + i);
    }
    juegos.clear();
    return 0;
}
