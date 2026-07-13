#pragma once 
#include "Personaje.hpp"
#include "iostream"

class Guerrero: public Personaje {
    private: 
        float vidaMax; 
        float salud; 
        float ataque; 
        int nivel;
        int fuerza; 

    public: 
        Guerrero(); 
        Guerrero(float, float, float, int, int); 
        float getVidaMax() const;
        void setVidaMax(float);
        float getSalud() const; 
        void setSalud(float); 
        float getAtaque() const; 
        void setAtaque(float); 
        int getNivel() const; 
        void setNivel(int);
        int getFuerza(); 
        void setFuerza(int); 
        int porcentajeSalud(); 
        void imprimeBarra();
        int calculaAtaque(Guerrero& otroGuerrero); 
        void recibeAtaque(int ptosAtaque);
        void atacar(Guerrero& otroGuerrero);
        void imprime() const;
}; 