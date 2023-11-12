//
// Created by keilo on 10/11/2023.
//

#include "Enfermedad.h"

Enfermedad::Enfermedad(const string &nombreEnfermedad, const string &secuenciaEnfermedad) : nombreEnfermedad(
        nombreEnfermedad), secuenciaEnfermedad(secuenciaEnfermedad) {}

Enfermedad::~Enfermedad() {

}

const string &Enfermedad::getNombreEnfermedad() const {
    return nombreEnfermedad;
}

void Enfermedad::setNombreEnfermedad(const string &nombreEnfermedad) {
    Enfermedad::nombreEnfermedad = nombreEnfermedad;
}

const string &Enfermedad::getSecuenciaEnfermedad() const {
    return secuenciaEnfermedad;
}

void Enfermedad::setSecuenciaEnfermedad(const string &secuenciaEnfermedad) {
    Enfermedad::secuenciaEnfermedad = secuenciaEnfermedad;
}

string Enfermedad::toString() {
    stringstream s;
    s << "Nombre de la enfermedad: " << nombreEnfermedad << endl;
    s << "Secuencia de la enfermedad: " << secuenciaEnfermedad << endl;
    return s.str();
}

static Enfermedad* recuperaEnfermedad(istream&) {

}

