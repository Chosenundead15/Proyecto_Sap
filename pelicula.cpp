#include "pelicula.h"

pelicula::pelicula(int cod = 0, std::string tit = " ", int dur = 0, int cost = 0)
{
    codigo = cod;
    titulo = tit;
    duracion = dur;
    costo = cost;
    sig = nullptr;
    principal = nullptr;
    sec = nullptr;
    prod = nullptr;                       
}

void pelicula::push(pelicula peli)
{
     pelicula *aux = this;
     while ( aux->sig && aux )
           aux = aux->sig;
     aux->sig = new pelicula;
     aux->*sig = peli;
}
