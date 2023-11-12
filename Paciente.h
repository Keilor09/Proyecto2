//
// Created by keilo on 10/11/2023.
//

#ifndef PROYECTO2_PACIENTE_H
#define PROYECTO2_PACIENTE_H

#include <iostream>
#include <sstream>
#include <fstream>
#include <istream>

using namespace std;

class Paciente {
    private:
        string id;
        string nombre;
        string telefono;
        string correo;
        string secuencia;
    public:
    Paciente(const string &id, const string &nombre, const string &telefono, const string &correo,
             const string &secuencia);

    Paciente();

    virtual ~Paciente();

    const string &getId() const;

    void setId(const string &id);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getTelefono() const;

    void setTelefono(const string &telefono);

    const string &getCorreo() const;

    void setCorreo(const string &correo);

    const string &getSecuencia() const;

    void setSecuencia(const string &secuencia);

    string toString();

    static Paciente* recuperaPaciente(istream& arch1);
};


#endif //PROYECTO2_PACIENTE_H
