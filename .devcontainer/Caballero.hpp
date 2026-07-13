#pragma once 
#include "Personaje.hpp"
#include "iostream"

class Caballero: public Personaje {
    private: 
        float vidaMax; 
        float salud; 
        float ataque; 
        int nivel;
        float agilidad; 

    public: 
        Caballero(); 
        Caballero(float, float, float, int, float); 
        float getVidaMax() const;
        void setVidaMax(float);
        float getSalud() const; 
        void setSalud(float); 
        float getAtaque() const; 
        void setAtaque(float); 
        int getNivel() const; 
        void setNivel(int);
        float getAgilidad(); 
        void setAgilidad(float); 
        int porcentajeSalud(); 
        void imprimeBarra();
        int calculaAtaque(Caballero& otroCaballero); 
        void recibeAtaque(int ptosAtaque);
        void atacar(Caballero& otroCaballero);
        void imprime() const;
}; 