/*Ejercicio 1
Crea 2 arrays de números enteros de 5 posiciones. Rellena el primero con
números aleatorios. Cópialo en el segundo en orden inverso. Muestra ambos
arrays.
Una vez hecho te permitirá introducir un número en la posición que desees en
el array principal, los cambios se deben ver también en el array invertido.
Cuando se introduzca un 0 se dejará de introducir números.
Ejemplo con un array de 5 posiciones:
Normal
5 10 1 2 3
Invertido
3 2 1 10 5

¿En qué posición quiere introducir un número?
5
¿Qué número?
15
Normal
5 10 1 2 15
Invertido
15 2 1 10 5
*/

#include <iostream>
#include <ctime>

using namespace std;

int main(){

    int lista[5];
    int listaInvertida[5];
    int contador=4, posicion, numero;

    cout<<"lista normal"<<endl;
    for(int i=0; i<5; i++){
        lista[i] = rand() % 100 + 1;
        cout<<lista[i];
        if(i<4){
            cout<<" - ";
        }else{
            cout<<"."<<endl;
        };
    }

    cout<<"lista invertida"<<endl;
    for(int i=0; i<5; i++){
        listaInvertida[i]=lista[contador];
        contador--;
        cout<<listaInvertida[i];
        if(i<4){
            cout<<" - ";
        }else{
            cout<<"."<<endl;
        };
    }

    cout<<"Elige un número"<<endl;
    cin>>numero;

    cout<<"En que posicion quieres ponerlo"<<endl;
    cin>>posicion;

    lista[posicion-1]=numero;
    listaInvertida[4-(posicion-1)]=numero;

     cout<<"lista normal"<<endl;
    for(int i=0; i<5; i++){
        cout<<lista[i];
        if(i<4){
            cout<<" - ";
        }else{
            cout<<"."<<endl;
        };
    }

    cout<<"lista invertida"<<endl;
    for(int i=0; i<5; i++){
        cout<<listaInvertida[i];
        if(i<4){
            cout<<" - ";
        }else{
            cout<<".";
        };
    }


return 0;
}





    
