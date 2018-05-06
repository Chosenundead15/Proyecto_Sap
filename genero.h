#ifndef GENERO_H
#define GENERO_H

#include <string>

struct genero {
       int codigo;
       std::string tipo;
       genero *sig;     
};
#endif
