#pragma once 
#include "Personaje.hpp"
#include "iostream"

class Guerrero: public Personaje {
    private: 
        int fuerza; 

    public: 
        Guerrero(); 
        Guerrero(float, float, float, int, int); 
        int getFuerza() const; 
        void setFuerza(int); 
        int calculaAtaque(Personaje& otroPersonaje); 
        void recibeAtaque(int ptosAtaque) override;
        void imprime() override;
}; 
