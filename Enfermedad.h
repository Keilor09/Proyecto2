//
// Created by keilo on 10/11/2023.
//

#ifndef PROYECTO2_ENFERMEDAD_H
#define PROYECTO2_ENFERMEDAD_H

#include <iostream>
#include <sstream>

using namespace std;

class Enfermedad {
    private:
    string secuenciaEnfermedad;
        string nombreEnfermedad;
    public:
        Enfermedad(const string &nombreEnfermedad, const string &secuenciaEnfermedad);

        virtual ~Enfermedad();

        const string &getNombreEnfermedad() const;

        void setNombreEnfermedad(const string &nombreEnfermedad);

        const string &getSecuenciaEnfermedad() const;

        void setSecuenciaEnfermedad(const string &secuenciaEnfermedad);

        string toString();

        static Enfermedad* recuperaEnfermedad(istream&);
};


#endif //PROYECTO2_ENFERMEDAD_H
