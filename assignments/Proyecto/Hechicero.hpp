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
        int calculaAtaque(Personaje& otroPersonaje); 
        void recibeAtaque(int ptosAtaque);
        void imprime();
}; 
