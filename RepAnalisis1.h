//
// Created by keilo on 10/11/2023.
//

#ifndef PROYECTO2_REPANALISIS1_H
#define PROYECTO2_REPANALISIS1_H

#include "IReporte.h"

using namespace std;

class RepAnalisis1 : public IReporte {
public:
    RepAnalisis1();
    virtual ~RepAnalisis1();
    void encabezado();
    void analisis(Paciente*,  ContEnfermedades*);
};


#endif //PROYECTO2_REPANALISIS1_H
