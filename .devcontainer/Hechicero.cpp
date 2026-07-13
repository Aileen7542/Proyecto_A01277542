#include "Hechicero.hpp"
#include "iostream" 

Hechicero::Hechicero(): Personaje(200.0, 200.0, 0, 00.0), magia(150.0){
}

Hechicero::Hechicero(float vMax, float vSalud, float atq, int nvl, float mgi): Personaje(vMax, vSalud, atq, nvl), magia{mgi}{
}

float Hechicero::getMagia()const{
    return magia; 
}

void Hechicero::setMagia(float mgi){
    magia = mgi; 
}

int Hechicero::calculaAtaque(Personaje& otroPersonaje){
    int daño = Personaje::calculaAtaque(otroPersonaje);

    if (getNivel() >= otroPersonaje.getNivel()){
        daño += magia * (getNivel() * 5 / 100);
    }

    if (getNivel() >= 5){
        int hechizo = rand() % 100; 
        if (hechizo < 30){
            daño += 20; 
            std::cout << "Hechizo especial"; 
        }
    }
    return daño;
}

void Hechicero::recibeAtaque(int ptsAtaque){
    Personaje::recibeAtaque(ptsAtaque); 
    
    int reduce = magia * (getNivel() * 5 / 100); 
    ptsAtaque -= reduce; 

    if (getNivel() >= 5){
        int hechizo = rand() % 100; 
        if (hechizo < 40){
            std::cout << "Hechizo de proteccion"; 
            ptsAtaque /= 2; 
        }
    }

    if (ptsAtaque < 0){
        ptsAtaque = 0; 
    }
}

void Hechicero::imprime()const{
    Personaje::imprime(); 
    std::cout << "Magia: " << magia << std::endl; 
}
