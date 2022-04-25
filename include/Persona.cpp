#include <iostream>
#include <stdlib.h>
using namespace std;


class Persona
{
private:
   string nombre;
   int edad;
public:
    Persona(string,int);
    void mostrarpersona();
    ~Persona();
};


Persona::Persona(string _nombre, int _edad)
{
nombre = _nombre;
edad = _edad;

}

void Persona::mostrarpersona(){
cout<<"nombre:" <<nombre<<endl;
cout<<"edad: "<<edad<<endl;



}

Persona::~Persona()
{
}