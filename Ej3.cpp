#include <iostream>
#include "Pila/Pila.h"
using namespace std;
void mostrarPila(Pila<int>& pila);
void funcion (Pila<int>& pila,int n);
int main() {
    cout << "Ejercicio N° 3" << endl;
    Pila<int>pila;
    int num1;
    pila.push(3);
    pila.push(3);
    pila.push(2);
    pila.push(5);
    pila.push(3);
    pila.push(9);
    mostrarPila(pila);

    cin>>num1;
    funcion(pila,num1);
    mostrarPila(pila);
    return 0;
}
void funcion (Pila<int>& pila,int n){
    Pila<int>aux;
    int cont=0;
    while(!pila.esVacia()){
        int valor=pila.pop();
        if (valor==n){
            cont++;
        }
        aux.push(valor);
    }

    mostrarPila(aux);



    if (cont<=1){
        while(!aux.esVacia()){
            int a=aux.pop();
        if (a!=n){
            pila.push(a);}
        }


        }else if(cont>1){

        int contador=1;
        while(!aux.esVacia()){
        int a=aux.pop();

        if (a!=n){
            pila.push(a);}
        else{

            if(contador!=cont){
                contador++;
            }else{
                 pila.push(a);
        }
        }

        }
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