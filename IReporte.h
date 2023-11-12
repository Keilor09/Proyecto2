//
// Created by keilo on 10/11/2023.
//

#ifndef PROYECTO2_IREPORTE_H
#define PROYECTO2_IREPORTE_H

#include "AplicacionADN.h"

using namespace std;

class IReporte {
public:
    virtual void encabezado() = 0;

    virtual void analisis(Paciente* p, ContEnfermedades* ce) = 0;

};

#endif //PROYECTO2_IREPORTE_H
