#pragma once 
#include "Personaje.hpp"
#include "iostream"

class Hechicero: public Personaje {
    private: 
        float magia; 

    public: 
        Hechicero(); 
        Hechicero(float, float, float, int, float); 
        float getMagia(); 
        void setMagia(float); 
        int calculaAtaque(Hechicero& otroHechicero); 
        void recibeAtaque(int ptosAtaque);
        void imprime() const;
}; 