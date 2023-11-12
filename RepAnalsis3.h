//
// Created by keilo on 10/11/2023.
//

#ifndef PROYECTO2_REPANALSIS3_H
#define PROYECTO2_REPANALSIS3_H

#include "IReporte.h"

using namespace std;

class RepAnalisis3 : public IReporte {
public:
    RepAnalisis3();
    virtual ~RepAnalisis3();
    void encabezado();
    void analisis(Paciente*, ContEnfermedades*);
};

#endif //PROYECTO2_REPANALSIS3_H
