#include <iostream>
#include <stdlib.h>
using namespace std;



class Empleado : public Persona
{
private:
    int codigo;
public:
    Empleado(string,int,int);
    void mostrarempleado();
    ~Empleado();
};


Empleado::Empleado(string _nombre, int _edad, int _codigo): Persona(_nombre,_edad)
{
codigo = _codigo;

}

void Empleado::mostrarempleado(){

mostrarpersona();
cout<<"codigo:"<<codigo<<endl;


}

Empleado::~Empleado()
{
}