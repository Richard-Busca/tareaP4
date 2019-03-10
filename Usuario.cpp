#include "Usuario.h"
#include "DtFecha.h"

Usuario::Usuario(){ //Constructor sin parametros
    cedula = "";
    nombre = "";
    fechaIngreso = DtFecha();
};

Usuario::Usuario(std::string cedula,std::string nombre, DtFecha fechaIngreso){ //Constructor con parametros
    this->cedula = cedula;
    this->nombre = nombre;
    this->fechaIngreso = fechaIngreso;  
};

void Usuario::setCedula(std::string cedula){
    this->cedula = cedula;
};

std::string Usuario::getCedula(){
    return cedula;
};

void Usuario::setNombre(std::string nombre){
    this->nombre = nombre;
};

std::string Usuario::getNombre(){
    return nombre;
};

void Usuario::setFechaIngreso(DtFecha FechaIngreso){
    this->fechaIngreso = FechaIngreso;
};

DtFecha Usuario::getFechaIngreso(){
    return fechaIngreso;
};