#pragma once 
#include "Personaje.hpp"
#include "iostream"

class Guerrero: public Personaje {
    private: 
        int fuerza; 

    public: 
        Guerrero(); 
        Guerrero(float, float, float, int, int); 
        int getFuerza(); 
        void setFuerza(int); 
        int calculaAtaque(Guerrero& otroGuerrero); 
        void recibeAtaque(int ptosAtaque);
        void imprime() const;
}; 