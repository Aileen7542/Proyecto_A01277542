#pragma once 
#include "Personaje.hpp"
#include "iostream"

class Hechicero: public Personaje {
    private: 
        float vidaMax; 
        float salud; 
        float ataque; 
        int nivel;
        float magia; 

    public: 
        Hechicero(); 
        Hechicero(float, float, float, int, float); 
        float getVidaMax() const;
        void setVidaMax(float);
        float getSalud() const; 
        void setSalud(float); 
        float getAtaque() const; 
        void setAtaque(float); 
        int getNivel() const; 
        void setNivel(int);
        float getMagia(); 
        void setMagia(float); 
        int porcentajeSalud(); 
        void imprimeBarra();
        int calculaAtaque(Hechicero& otroHechicero); 
        void recibeAtaque(int ptosAtaque);
        void atacar(Hechicero& otroHechicero);
        void imprime() const;
}; 