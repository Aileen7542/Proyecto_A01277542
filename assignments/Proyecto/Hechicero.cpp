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
        daño += magia * (getNivel() * 5 / 100.0);
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

void Hechicero::calculaRevive(){
    if(getSalud() <= 0){
        if(magia >= 70){
            std::cout << "Hechicero revivio" << std::endl;
            setSalud(70); 
            magia -= 70; 
        }
        else{
            std::cout << "El personaje murio" << std::endl; 
        }
    }
}

void Hechicero::recibeAtaque(int ptsAtaque){
    int reduce = magia * (getNivel() * 5 / 100.0); 
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
    Personaje::recibeAtaque(ptsAtaque);
    calculaRevive(); 
}

void Hechicero::imprime(){
    Personaje::imprime(); 
    std::cout << "Magia: " << magia << std::endl; 
}
