#include "Guerrero.hpp"
#include "iostream" 

Guerrero::Guerrero(): Personaje(200.0, 200.0, 0, 00.0), fuerza(0){
}

Guerrero::Guerrero(float vMax, float vSalud, float atq, int nvl, int fza): Personaje(vMax, vSalud, atq, nvl), fuerza{fza}{
}

int Guerrero::getFuerza()const{
    return fuerza; 
}

void Guerrero::setFuerza(int fza){
    fuerza = fza; 
}

int Guerrero::calculaAtaque(Personaje& otroPersonaje){
    int daño = Personaje::calculaAtaque(otroPersonaje);

    if (getNivel() >= otroPersonaje.getNivel()){
        daño += fuerza * (getNivel() * 5 / 100);
    }
    return daño;
}

void Guerrero::recibeAtaque(int ptsAtaque){
    Personaje::recibeAtaque(ptsAtaque); 
    
    int reduce = fuerza * (getNivel() * 5 / 100); 
    ptsAtaque -= reduce; 

    if (ptsAtaque < 0){
        ptsAtaque = 0; 
    }
}

void Guerrero::imprime()const{
    Personaje::imprime(); 
    std::cout << "Fuerza: " << fuerza << std::endl; 
}
