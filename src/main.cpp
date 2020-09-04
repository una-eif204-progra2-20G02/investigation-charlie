#include <iostream>
#include "MonsterCard.h"
#include "MagicCard.h"
#include "Deck.h"
/*
    // buen ejemplo de Liskov
struct Animal{
    Animal(){}
    virtual std::string hablar(){   //cualquier animal que se implemente debe ser capaz de hablar
        return " hola ";
    }
};
struct Perro: Animal{
    Perro(){}
    std::string hablar() override{ // el perro sobreescribe el metodo para poder ladrar
    return "woof";
}
};

struct Gato: Animal{
    Gato(){}
    std::string hablar() override{ // el gato sobreescribe el metodo para poder maullar
    return "miau";
}
};
*/

/*
    //Mal ejemplo de Lizcov
struct Animal{
    Animal(){}
    virtual std::string PerroCome(){
    return "El perro come";
    }
    std::string hablar(Animal* ani){ // expandir el codigo con mas animales requiere expandir este metodo
    if (Perro* per = dynamic_cast<Perro*>(ani)) {
        return per->ladrar();
    }
    if (Gato* per = dynamic_cast<Gato*>(ani)) {
        return per->maullar();
    }
}// (sin polimorfismo no puedo usar 'dynamic_cast' en el metodo hablar)
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




*/
int main(){

    MonsterCard card;// = new Card();
    std::cout << card.cardEffect();
    std::cout<<"\n";

    MagicCard card1;
    std::cout<<card1.showEffect();

    return 0;
}