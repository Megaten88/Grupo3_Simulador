#include "Person.h"
#include "Player.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    vector<Player*> jugadores;


    Player* asd = new Player();

    int opcion = 0 ;

    while (opcion !=  8){
        std::cout << "LAB# 6 :: GRUPO 3" << std::endl;
        std::cout << "1) Agregar jugadores" << std::endl;
        std::cout << "2) spoof            " << std::endl;
        std::cout << "3) spoof            " << std::endl;
        std::cout << "4) spoof            " << std::endl;
        std::cin >> opcion;

        if (opcion == 1) {

            string nombre;
            string apellido;
            string apodo;
            int nivel;
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

            /*
            string name;
        	string surname;
        	string nickname;
        	int level;
            string position
            */
        }

        if (opcion == 2) {

        }

        if (opcion == 3) {

        }

        if (opcion == 4) {

        }



    }



    return 0;
}
