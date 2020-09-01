#include <iostream>




    // buen ejemplo de Lizcov
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


/*
    //Mal ejemplo de Lizcov
struct Animal{
    Animal(){}
    virtual void comer(){}                               // (sin polimorfismo no puedo usar 'dynamic_cast' en el metodo hablar)
};

struct Perro: Animal{
    Perro(){}
    std::string ladrar(){ // solo los perros ladran
        return "woof";
    }
};

struct Gato: Animal{
    Gato(){}
    std::string maullar(){ // solo los gatos maullan
        return "miau";
    }
};


std::string hablar(Animal* ani){ // expandir el codigo con mas animales requiere expandir este metodo
    if (Perro* per = dynamic_cast<Perro*>(ani)) {
        return per->ladrar();
    }
    if (Gato* per = dynamic_cast<Gato*>(ani)) {
        return per->maullar();
    }
}

*/
int main(){

    Perro* firulais = new Perro();
    Gato* charlie= new Gato();

    //cout malo
  //  std::cout<< "Firulais dice: "<< hablar(firulais) << std::endl;
  //  std::cout<< "y Charlie dice: "<< hablar(charlie) << std::endl;



    //cout bueno

    std::cout<< "Firulais dice: "<< firulais->hablar() << std::endl<< std::endl;
    std::cout<< "Charlie dice: "<< charlie->hablar() << std::endl << std::endl;
    Animal* maikol= new Animal(); // y el metodo funciona incluso con un metodo de la clase base Animal
    std::cout<< "y Maikol dice: "<< maikol->hablar() << std::endl << std::endl;




}