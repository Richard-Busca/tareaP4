#ifndef USUARIO
#define USUARIO
#include <string.h>
#include <iostream>
#include <DtFecha.h>

using namespace std;

class Usuario
{
    private:
        std::string cedula;
        std::string nombre;
        DtFecha fechaIngreso;
    public:
        Usuario(); // Constructor sin parametros

        Usuario(std::string cedula,std::string nombre, DtFecha fechaIngreso); //Constructor con parametros

        void setCedula(std::string cedula);

        std::string getCedula();

        void setNombre(std::string nombre);

        std::string getNombre();

        void setFechaIngreso(DtFecha fechaIngreso);
        
        DtFecha getFechaIngreso();
};


#endif