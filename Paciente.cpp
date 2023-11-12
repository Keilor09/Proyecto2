//
// Created by keilo on 10/11/2023.
//

#include "Paciente.h"

Paciente::Paciente(const string &id, const string &nombre, const string &telefono, const string &correo,
                   const string &secuencia) : id(id), nombre(nombre), telefono(telefono), correo(correo),
                                              secuencia(secuencia) {}

Paciente::~Paciente() {

}

const string &Paciente::getId() const {
    return id;
}

void Paciente::setId(const string &id) {
    Paciente::id = id;
}

const string &Paciente::getNombre() const {
    return nombre;
}

void Paciente::setNombre(const string &nombre) {
    Paciente::nombre = nombre;
}

const string &Paciente::getTelefono() const {
    return telefono;
}

void Paciente::setTelefono(const string &telefono) {
    Paciente::telefono = telefono;
}

const string &Paciente::getCorreo() const {
    return correo;
}

void Paciente::setCorreo(const string &correo) {
    Paciente::correo = correo;
}

const string &Paciente::getSecuencia() const {
    return secuencia;
}

void Paciente::setSecuencia(const string &secuencia) {
    Paciente::secuencia = secuencia;
}

string Paciente::toString() {
    stringstream s;
    s << "ID: " << id << " Nombre: " << nombre << endl;
    s << "Telefono: " << telefono << " Correo: " << correo << endl;
    s << "Secuencia: " << secuencia << endl;
    return s.str();
}

Paciente* Paciente::recuperaPaciente(istream& arch1) {
    if (!arch1) {
        cout << "No se pudo abrir archivo" << endl;
    }
    else {
        string registro, id, nombre, telefono, correo, secuencia;
        while (getline(arch1, registro)) {
            stringstream s(registro);
            getline(s, id, ',');
            getline(s, nombre, ',');
            getline(s, telefono, ',');
            getline(s, correo, ',');
            getline(s, secuencia, ',');
            return new Paciente(id, nombre, telefono, correo, secuencia);
        }
    }
}

Paciente::Paciente() {}

