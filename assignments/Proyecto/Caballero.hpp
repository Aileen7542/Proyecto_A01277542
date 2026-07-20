#pragma once 
#include "Personaje.hpp"
#include "iostream"

class Caballero: public Personaje {
    private: 
        float agilidad; 
        int escudo; 

    public: 
        Caballero(); 
        Caballero(float, float, float, int, float, int); 
        float getAgilidad() const; 
        void setAgilidad(float); 
        int getEscudo() const; 
        void setEscudo(int); 
        int calculaAtaque(Personaje& otroPersonaje); 
        void recibeAtaque(int ptosAtaque) override;
        void imprime() override;
}; 