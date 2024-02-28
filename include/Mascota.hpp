#pragma once //siempre se pone en las clases
#include <Alimento.hpp>


class Mascota{//Las clases primero en mayuscula

    private:
    //Implementación oculta
    int Energia;
    int Felicidad;
    public:
    //Interfaz
    Mascota(){
        this->Energia=0;
        this->Felicidad=0;
    }
    ~Mascota(){}
    void Comer(){
        Energia +=alimento.ExtraerEnergia;
    }
    void Jugar(){
        Energia -= 1;
        Felicidad +=1;
        int LeerFelicidad(){
            return this->Felicidad;
        }
    }
    int LeerFelicidad(){
        return this->Felicidad;
    }
    int LeerEnergia(){
        return this->Energia;
    }


};