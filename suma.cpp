#include <iostream>
using namespace std;

void sumarNumeros(){
    int a, b;

    cout<<"Ingresa el numero uno: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    cout<<"El resultado de la suma es: "<<a+b;

}

int main(){
    string opcion="n";

    cout<<"Desea hacer una suma de dos nuemros? s/n \n";
    cin>>opcion;

    if (opcion=="s"){
       sumarNumeros();
    }else{
        cout<<"Hasta la proxima";
    }
    
}