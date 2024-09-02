
#include <iostream>
#include "Pila/Pila.h"
using namespace std;
void invertirPila (Pila<char>pila);
int main() {
    cout << "Ejercicio N° 1" << endl;
    Pila<char>pila;
    char caracter;
cout << "Ingrese una palabra o frase terminando con un punto.";
do{
cin.get(caracter);
if(caracter!='.'){
    pila.push(caracter);
}}while (caracter != '.');
invertirPila(pila);
    return 0;
}
void invertirPila (Pila<char>pila){
    while(!pila.esVacia()){
cout<<pila.pop();
}}
