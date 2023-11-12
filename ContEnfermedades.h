//
// Created by keilo on 11/11/2023.
//

#ifndef PROYECTO2_CONTENFERMEDADES_H
#define PROYECTO2_CONTENFERMEDADES_H

#include "Enfermedad.h"

using namespace std;

class ContEnfermedades {
private:
    Enfermedad* vec[100];
    int can;
    int tam;
public:
    ContEnfermedades();
    virtual ~ContEnfermedades();
    int getCantidad();
    Enfermedad* obtEnfermedadEnPos(int);
    bool ingresaEnfermedade(Enfermedad*);
    int recuperaEnfermedades(ifstream&);
    void limpiaContenedor();
    string toString();
};



#endif //PROYECTO2_CONTENFERMEDADES_H
