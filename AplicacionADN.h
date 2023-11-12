//
// Created by keilo on 11/11/2023.
//

#ifndef PROYECTO2_APLICACIONADN_H
#define PROYECTO2_APLICACIONADN_H

#include "ContPacientes.h"
#include "ContEnfermedades.h"
#include "IReporte.h"

class IReporte;

using namespace std;

class AplicacionADN {
private:
    ContPacientes* cp;
    ContEnfermedades* ce;
public:
    AplicacionADN();
    virtual ~AplicacionADN();
    ContPacientes* getContenPacientes();
    ContEnfermedades* getContenEnfermedades();
    int cargarPacientes();
    int cargarEnfermedades();
    void reporte(IReporte*);
    // No necesarios para el examen..
    void verPacientesEnPantalla();
    void verEnfermedadesEnPantalla();
};


#endif //PROYECTO2_APLICACIONADN_H
