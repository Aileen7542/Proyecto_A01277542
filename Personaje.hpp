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
        double getVidaMax() const;
        void setVidaMax(double);
        double getSalud() const; 
        void setSalud(double); 
        double getAtaque(); 
        void setAtaque(double); 
        double getNivel(); 
        void setNivel(double);
        int porcentajeSalud(); 
        void imprimeBarra();
        int calculaAtaque(Personaje& objetivo); 
        void recibeAtaque(int ptosAtaque);
        void atacar(Personaje& objetivo);
        void imprime();
};