#include <iostream>
#include <vector>
#include "Personaje.hpp"
#include "Caballero.hpp"
#include "Guerrero.hpp"
#include "Hechicero.hpp"

int main() {
    std::vector<Personaje*> personaje;
    personaje.push_back(new Guerrero());
    personaje.push_back(new Caballero());
    personaje.push_back(new Hechicero());
// personajees 
    for (Personaje* p : personaje) {
        std::cout << *p << std::endl;
    }
// peleaa
    for (int i = 1; i < personaje.size(); i++) {
        personaje[0]->atacar(*personaje[i]);
        std::cout << *personaje[i] << std::endl;
    }
    return 0;
}
