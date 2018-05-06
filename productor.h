#ifndef PRODUCTOR_H
#define PRODUCTOR_H

#include <string>
#include "pelicula.h"
#include "genero.h"

struct producciones {
       pelicula *produccion;
       producciones *sig;       
};

struct productor {
       int codigo;
       std::string nombre;
       std::string nacionalidad;
       genero *gen;
};

#ifndef
