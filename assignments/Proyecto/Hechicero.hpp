#pragma once 
#include "Personaje.hpp"
#include "iostream"

class Hechicero: public Personaje {
    private: 
        float magia; 

    public: 
        Hechicero(); 
        Hechicero(float, float, float, int, float); 
        float getMagia() const; 
        void setMagia(float); 
        int calculaAtaque(Personaje& otroPersonaje) override; 
        void recibeAtaque(int ptosAtaque) override;
        void imprime() override;
}; 
