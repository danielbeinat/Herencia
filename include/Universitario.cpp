#include <iostream>
#include <stdlib.h>
using namespace std;


class Universitario : public Estudiante
{
private:
    string carrera;
public:
    Universitario(string,int,int,string);
    void mostraruniversitario();
    ~Universitario();
};

Universitario::Universitario(string _nombre, int _edad, int _notafinal , string _carrera) : Estudiante(_nombre,_edad,_notafinal)
{
carrera = _carrera;


}

void Universitario::mostraruniversitario(){

mostrarestudiante();
cout<<"Carrera : "<<carrera<<endl;


}

Universitario::~Universitario()
{
}

















