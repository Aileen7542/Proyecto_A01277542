#include "Caballero.hpp"
#include "iostream" 

Caballero::Caballero(): Personaje(200.0, 200.0, 0, 00.0), agilidad(00.0){
}

Caballero::Caballero(float vMax, float vSalud, float atq, int nvl, float agl): Personaje(vMax, vSalud, atq, nvl), agilidad{agl}{
}

float Caballero::getAgilidad()const{
    return agilidad; 
}

void Caballero::setAgilidad(float agl){
    agilidad = agl; 
}

int Caballero::calculaAtaque(Personaje& otroPersonaje){
    int daño = Personaje::calculaAtaque(otroPersonaje);

    if (getNivel() >= otroPersonaje.getNivel()){
        daño += agilidad * (getNivel() * 5 / 100);
    }
    return daño;
}

void Caballero::recibeAtaque(int ptsAtaque){
    Personaje::recibeAtaque(ptsAtaque); 
    
    int reduce = agilidad * (getNivel() * 5 / 100); 
    ptsAtaque -= reduce; 

    if (ptsAtaque < 0){
        ptsAtaque = 0; 
    }
}

void Caballero::imprime()const{
    Personaje::imprime(); 
    std::cout << "Agilidad: " << agilidad << std::endl; 
}
