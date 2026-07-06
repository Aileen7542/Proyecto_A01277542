#pragma once 

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
        void setVidaMax(double);
        float getSalud() const; 
        void setSalud(double); 
        float getAtaque() const; 
        void setAtaque(double); 
        int getNivel() const; 
        void setNivel(double);
        int porcentajeSalud(); 
        void imprimeBarra();
        int calculaAtaque(Personaje& objetivo); 
        void recibeAtaque(int ptosAtaque);
        void atacar(Personaje& objetivo);
        void imprime() const;
};