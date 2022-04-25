#include <iostream>
#include <stdlib.h>
using namespace std;


class Estudiante : public Persona
{
private:
    int notafinal;
public:
    Estudiante(string,int,int);
    void mostrarestudiante();
    ~Estudiante();
};



Estudiante::Estudiante(string _nombre, int _edad, int _notafinal): Persona(_nombre,_edad)
{
    notafinal = _notafinal;
}

void Estudiante::mostrarestudiante(){
mostrarpersona();
cout<<"notafinal : "<<notafinal<<endl;

}

Estudiante::~Estudiante()
{
}