#pragma once 
#include "iostream"

class Personaje
{
    private: 
        float vidaMax; 
        float salud; 
        float ataque; 
        int nivel; 

    public: 
        Personaje();
        Personaje(float, float, float, int); 
        float getVidaMax() const;
        void setVidaMax(float);
        float getSalud() const; 
        void setSalud(float); 
        float getAtaque() const; 
        void setAtaque(float); 
        int getNivel() const; 
        void setNivel(int);
        int porcentajeSalud(); 
        void imprimeBarra();
        virtual int calculaAtaque(Personaje& otroPersonaje);
        void atacar(Personaje& otroPersonaje); 
        virtual void recibeAtaque(int ptosAtaque);
        virtual void calculaRevive() = 0; 
        virtual void imprime();
        virtual ~Personaje() = default;
        friend std::ostream& operator <<(std::ostream& os, Personaje& personaje);
};
