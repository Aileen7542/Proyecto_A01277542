#include "Caballero.hpp"
#include "iostream" 

Caballero::Caballero(): Personaje(200.0, 200.0, 0, 00.0), agilidad(50.0), escudo{50}{
}

Caballero::Caballero(float vMax, float vSalud, float atq, int nvl, float agl, int esc): Personaje(vMax, vSalud, atq, nvl), agilidad{agl}, escudo{esc}{
}

float Caballero::getAgilidad()const{
    return agilidad; 
}

void Caballero::setAgilidad(float agl){
    agilidad = agl; 
}

int Caballero::getEscudo()const{
    return escudo; 
}

void Caballero::setEscudo(int esc){
    escudo = esc; 
}

int Caballero::calculaAtaque(Personaje& otroPersonaje){
    int daño = Personaje::calculaAtaque(otroPersonaje);

    if (getNivel() >= otroPersonaje.getNivel()){
        daño += agilidad * (getNivel() * 5 / 100.0);
    }
    return daño;
}

void Caballero::recibeAtaque(int ptsAtaque){
    int reduce = escudo * (getNivel() * 5 / 100.0); 
    ptsAtaque -= reduce; 

    if (ptsAtaque < 0){
        ptsAtaque = 0; 
    }

    if (escudo > 0){
        escudo -= 5; 
    }
    Personaje::recibeAtaque(ptsAtaque); 
}

void Caballero::imprime(){
    Personaje::imprime(); 
    std::cout << "Agilidad: " << agilidad << std::endl; 
}
