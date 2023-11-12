//
// Created by keilo on 10/11/2023.
//

#ifndef PROYECTO2_REPANALISIS2_H
#define PROYECTO2_REPANALISIS2_H

#include "IReporte.h"

using namespace std;

class RepAnalisis2 : public IReporte {
public:
    RepAnalisis2();
    virtual ~RepAnalisis2();
    void encabezado();
    void analisis(Paciente*, ContEnfermedades*);
};

#endif //PROYECTO2_REPANALISIS2_H
