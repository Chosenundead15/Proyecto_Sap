#ifndef ACTOR_H
#define ACTOR_H

#include <string>
#include "oscar.h"

struct actor {
       int codigo;
       std::string nombre;
       std::string nacionalidad;
       genero *gen;
       oscar *oscares;
}
#endif
