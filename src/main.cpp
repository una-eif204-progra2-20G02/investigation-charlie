#include <iostream>
#include "MonsterCard.h"
#include "MagicCard.h"
#include "Deck.h"

   
    //Mal ejemplo de Lizcov
struct Animal{
    Animal(){}

    virtual std::string PerroCome()=0;

    std::string hablar(Animal* ani){ // expandir el codigo con mas animales requiere expandir este metodo
    if (Perro* per = dynamic_cast<Perro*>(ani)) {
        return per->ladrar();
    }
    if (Gato* per = dynamic_cast<Gato*>(ani)) {
        return per->maullar();
    }
}
};
struct Perro: Animal{
    Perro(){}
    std::string ladrar(){ // solo los perros ladran
        return "woof";
    }
    virtual std::string PerroCome(){
    return "El perro come";
    }
};
struct Gato: Animal{
    Gato(){}
    std::string maullar(){ // solo los gatos maullan
        return "miau";
    }
    virtual std::string PerroCome(){}
};





int main(){

    MonsterCard card;// = new Card();
    std::cout << card.cardEffect();
    std::cout<<"\n";

    MagicCard card1;
    std::cout<<card1.showEffect();

    return 0;
}