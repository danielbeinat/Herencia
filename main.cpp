#include <iostream>
#include <stdlib.h>
using namespace std;
#include "include/Persona.cpp"
#include "include/Empleado.cpp"
#include "include/Estudiante.cpp"
#include "include/Universitario.cpp"


int main(){

Empleado empleado1("juan",23,4);
empleado1.mostrarempleado();
cout<<endl;

Estudiante estudiante1("pedro",26,5);
estudiante1.mostrarestudiante();
cout<<endl;

Universitario universitario1("nico",35,6,"analista en sistemas");
universitario1.mostraruniversitario();


    return 0;
}