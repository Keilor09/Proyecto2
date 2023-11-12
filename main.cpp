#include <iostream>
#include "Paciente.h"
#include "ContPacientes.h"
using namespace std;

int main() {

    ifstream a("pacientes.txt");
    ContPacientes* cont = new ContPacientes();

    while (!a.eof()) {
        cont->recuperaPacientes(a);
        cout << cont->toString() << endl;
    }

    return 0;
}
