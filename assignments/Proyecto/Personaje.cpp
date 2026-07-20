#include "Personaje.hpp"
#include "iostream"
#include "cstdlib"

Personaje::Personaje(): vidaMax{200.0}, salud{200.0}, nivel{0}, ataque{00.0}{
}

Personaje::Personaje(float vMax, float vSalud, float atq, int nvl): vidaMax{vMax}, salud{vSalud}, ataque{atq}, nivel{nvl}{
}

float Personaje::getVidaMax() const{
    return vidaMax;
}

void Personaje::setVidaMax(float vMax){
    vidaMax = vMax; 
}

float Personaje::getSalud() const{
    return salud;
}

void Personaje::setSalud(float vSalud){
    salud = vSalud;
}

float Personaje::getAtaque() const{
    return ataque;
}

void Personaje::setAtaque(float atq){
    ataque = atq;
}

int Personaje::getNivel() const{
    return nivel;
}

void Personaje::setNivel(int nvl){
    nivel = nvl;
}

int Personaje::porcentajeSalud(){
    if (salud == 0){
        return 0;
    }
    else{
        int porcentaje = (salud/vidaMax) * 100;
        return porcentaje; 
    }
}

void Personaje::imprimeBarra(){
    int restante = porcentajeSalud() / 5;
    int perdido = 20 - restante; 

    std::string barraRestante(restante, '$');
    std::string barraPerdido(perdido, '#');

    std::cout << barraRestante << barraPerdido << std::endl;
}

int Personaje::calculaAtaque(Personaje& otroPersonaje){
    int daño = 0;

    if (otroPersonaje.getNivel() > nivel){
        int minimo = 1; 
        int maximo = ataque / 2; 
        daño = rand() % (maximo - minimo + 1) + minimo; 
    }
    else{
        int minimo = ataque / 2;
        int maximo = ataque; 
        daño = rand() % (maximo - minimo + 1) + minimo; 
    }
    return daño; 
}

void Personaje::recibeAtaque(int ptsAtaque){
    salud = salud - ptsAtaque; 

    if (salud < 0){
        salud = 0; 
    }
}

void Personaje::atacar(Personaje& otroPersonaje){
    int puntosataque = calculaAtaque(otroPersonaje); 
    otroPersonaje.recibeAtaque(puntosataque); 
}

void Personaje::imprime(){
    std::cout << "Vida Maxima: " << vidaMax << std::endl; 
    std::cout << "Salud: " << salud << std::endl;
    std::cout << "Nivel: " << nivel << std::endl; 
    std::cout << "Ataque: " << ataque << std::endl; 
    std::cout << "Barra de vida: ";
    imprimeBarra();
    std::cout << std::endl;
}

std::ostream& operator <<(std::ostream& os, Personaje& personaje){
    personaje.imprime();
    return os;
}