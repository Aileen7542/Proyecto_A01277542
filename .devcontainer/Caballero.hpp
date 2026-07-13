#pragma once 
#include "Personaje.hpp"
#include "iostream"

class Caballero: public Personaje {
    private: 
        float agilidad; 

    public: 
        Caballero(); 
        Caballero(float, float, float, int, float); 
        float getAgilidad() const; 
        void setAgilidad(float); 
        int calculaAtaque(Caballero& otroCaballero); 
        void recibeAtaque(int ptosAtaque);
        void imprime() const;
}; 