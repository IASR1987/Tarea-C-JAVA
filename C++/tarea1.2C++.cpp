/*Ejercicio 2
Cree un programa que lea una frase y cuente cuántas vocales hay en total.
después reemplace todas las "a" del String anterior por una "e".
Ejemplo:
“La lluvia de Sevilla es una pura maravilla”
Vocales: 17
“Le lluvia de Seville es une pure mereville”*/

#include <iostream>

using namespace std;

int main(){

    string frase;
    string frase_con_e="";
    int vocales=0;

    cout<<"introduce una frase."<<endl;
    getline(cin,frase);

    for(int i=0; i<frase.length(); i++){

        frase_con_e=frase_con_e + frase[i];

        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
            vocales++;
        }
        if(frase[i]=='a'){
            frase_con_e[i]='e';
        }
    }
    cout<<"La frase contiene "<<vocales<<" vocales."<<endl;
    cout<<"La frase es: "<<frase<<endl;
    cout<<"Sustituyendo las 'a' por 'e' la frase queda: "<<frase_con_e<<endl;


return 0;
}





    
