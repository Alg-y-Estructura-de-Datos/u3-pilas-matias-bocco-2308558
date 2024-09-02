#include <iostream>
#include "Pila/Pila.h"
using namespace std;
void reemplazarNum (Pila<int>&pila,int num1,int num2);
void mostrarPila(Pila<int>& pila);
int main() {
    cout << "Ejercicio N° 2" << endl;
    Pila<int>pila;
    int num1,num2;
    pila.push(3);
    pila.push(3);
    pila.push(2);
    pila.push(5);
    pila.push(3);
    pila.push(9);
    mostrarPila(pila);
    cin>>num1;
    cin>>num2;
    reemplazarNum(pila,num1,num2);
    mostrarPila(pila);
    return 0;
}
void reemplazarNum (Pila<int>&pila,int num1,int num2){
    Pila<int>aux;
    while(!pila.esVacia()){
        int a=pila.pop();
        if (a==num1){
            aux.push(num2);
        }else{
            aux.push(a);
        }
          }
    while(!aux.esVacia()){
        pila.push(aux.pop());
    }
}
void mostrarPila(Pila<int>& pila) {
    Pila<int> pilaAux;

    // Desapilar elementos para mostrar sin perderlos
    while (!pila.esVacia()) {
        int valor = pila.pop();
        cout << valor << " ";
        pilaAux.push(valor);
    }
    cout << endl;

    // Restaurar la pila original
    while (!pilaAux.esVacia()) {
        pila.push(pilaAux.pop());
    }
}
