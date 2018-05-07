#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "pelicula.h"

struct compras {
       pelicula *peli;
       compras *sig;       
};

struct cliente {
       int codigo;
       std::string nombre;
       int num_compras;
       char tipo;
       cliente *sig;
};
