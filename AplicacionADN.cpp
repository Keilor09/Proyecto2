//
// Created by keilo on 11/11/2023.
//

#include "AplicacionADN.h"

AplicacionADN::AplicacionADN() {
    //...
}

AplicacionADN::~AplicacionADN() {
    if (cp != NULL) delete cp;
    if (ce != NULL) delete ce;
}

ContPacientes* AplicacionADN::getContenPacientes() {
    return cp;
}

ContEnfermedades* AplicacionADN::getContenEnfermedades() {
    return ce;
}

int AplicacionADN::cargarPacientes() {
    //...
}

int AplicacionADN::cargarEnfermedades() {
    //...
}

void AplicacionADN::reporte(IReporte* irep) {
    //...

}

// No necesarios para el examen..

void AplicacionADN::verPacientesEnPantalla() {
    cout << cp->toString() << endl;
}

void AplicacionADN::verEnfermedadesEnPantalla() {
    cout << ce->toString() << endl;
}
