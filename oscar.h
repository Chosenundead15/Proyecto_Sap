#ifndef OSCAR_H
#define OSCAR_H

#include <string>

struct oscar {
       int codigo;
       std::string denominacion;
       std::string fecha;
       std::string lugar;
       oscar *sig;     
};
#endif
