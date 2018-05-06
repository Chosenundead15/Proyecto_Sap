#ifndef PELICULA_H
#define PELICULA_H

#include <string>
#include "actor.h"

struct secundario {
       actor *info;
       secundario *sig;       
};

struct pelicula {
       int codigo;
       std::string titulo;
       int lanzamiento;
       int duracion;
       int costo;
       
       pelicula *sig;
       actor *principal;
       secundario *sec;             
};
#endif
