#include <iostream>
#include "Caballero.hpp"
#include "Guerrero.hpp"
#include "Hechicero.hpp"

int main()
{
    Caballero Caballero(100, 100, 20, 5, 15, 10);
    Guerrero Guerrero(120, 120, 25, 4, 30);
    Hechicero Hechicero(80, 80, 35, 6, 40);

    Caballero.imprime();
    Guerrero.imprime();
    Hechicero.imprime();

    std::cout << "Caballero ataca a Guerrero" << std::endl;
    Caballero.atacar(Guerrero);
    Guerrero.imprime();

    std::cout << "Guerrero ataca a Caballero" << std::endl;
    Guerrero.atacar(Caballero);
    Caballero.imprime();

    std::cout << "Hechicero ataca a Caballero" << std::endl;
    Hechicero.atacar(Caballero);
    Caballero.imprime();

    std::cout << "Caballero ataca a Hechicero" << std::endl;
    Caballero.atacar(Hechicero);
    Hechicero.imprime();

    std::cout << "Guerrero ataca a Hechicero" << std::endl;
    Guerrero.atacar(Hechicero);
    Hechicero.imprime();

    std::cout << "Hechicero ataca a Guerrero" << std::endl;
    Hechicero.atacar(Guerrero);
    Guerrero.imprime();

    return 0;
}
