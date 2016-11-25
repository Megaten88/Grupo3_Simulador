#include "Person.h"
#include "Player.h"
#include "Coach.h"
#include "Team.h"
#include "Game.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    vector<Player*> jugadores;
    vector<Coach*> entrenadores;
    vector<Team*> equipos;
    vector<Game*> juegos;


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

                std::cout << "Hora de asignar jugadores a un equipo" << std::endl;

                cout << "Seleccione equipo a asignar: " << endl;

                for (int i = 0; i < equipos.size(); i++) {
                    Team * temp = equipos.at(i);
                    cout << i <<" >>> "<< temp->getT_Name() << endl;
                }




                int contador = 11;
                int seleccion;

                    while (contador > 0) {
                        std::cout << "Lista de jugadores Disponibles" << std::endl;
                        for (int i = 0; i < jugadores.size(); i++) {
                            Player * temp = jugadores.at(i);
                            cout << i <<" >>> "<< temp->getName() << endl;
                        }

                        contador--;
                    }


            }else{
                cout << "Aun no se cumplen las condiciones para esta opción" << endl;
            }

    }
}


    return 0;
}
