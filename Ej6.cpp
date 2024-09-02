#include <iostream>
#include "Pila/Pila.h"
using namespace std;
void mostrarPila(Pila<string>& pila);
void funcion (const string estado,Pila<string>& pila, const string lugar);
int main() {
    cout << "Ejercicio N° 3" << endl;
    Pila<string>pila;
    funcion("in",pila, "Recepcion");
    funcion("in",pila, "Oficina");
    funcion("in",pila, "Sala de Reuniones");
    funcion("out",pila, "Sala de Reuniones");
    funcion( "in",pila, "GYM");
    mostrarPila(pila);
    return 0;
}

void funcion(const string estado,Pila<string>& pila, const string lugar){
    if (estado == "in"){
        pila.push(lugar);
    }else{
        pila.pop();
    }

}
void mostrarPila(Pila<string>& pila) {
    Pila<string> pilaAux;

    // Desapilar elementos para mostrar sin perderlos
    while (!pila.esVacia()) {
        string valor = pila.pop();
        cout << valor << " ";
        pilaAux.push(valor);
    }
    cout << endl;

    // Restaurar la pila original
    while (!pilaAux.esVacia()) {
        pila.push(pilaAux.pop());
    }
}