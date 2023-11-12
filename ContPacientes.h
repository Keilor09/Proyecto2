//
// Created by keilo on 11/11/2023.
//

#ifndef PROYECTO2_CONTPACIENTES_H
#define PROYECTO2_CONTPACIENTES_H

#include "Paciente.h"

using namespace std;

class ContPacientes {
private:
    Paciente* vec[100];
    int can;
    int tam;
public:
    ContPacientes();
    virtual ~ContPacientes();
    int getCantidad();
    Paciente* obtPacienteEnPos(int);
    bool ingresaPaciente(Paciente*);
    void recuperaPacientes(ifstream& arch1);
    void limpiaContenedor();
    string toString();
};



#endif //PROYECTO2_CONTPACIENTES_H
