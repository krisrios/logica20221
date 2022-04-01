#include <iostream>

using namespace std;
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
float division(int a, int b);//a/b
void seleccion(int opcion, int a, int b);
void calculadora();


int main()
{
 calculadora();
}

int suma(int a, int b){
   
    return a+b;
}

int resta(int a, int b){
   
    return a-b;
}

int multiplicacion(int a, int b){
   
    return a*b;
}

float division(int a, int b){
   
    return (float)a/(float)b;
}

void seleccion(int opcion, int a, int b){
   
    float resultado;
   
    switch(opcion){
        case 1:
        resultado  = (float) suma( a,  b);
        break;
       
        case 2:
        resultado= (float) resta(a, b);
        break;
       
        case 3:
        resultado= (float) multiplicacion( a,  b);
        break;
       
        case 4:
        resultado= (float)division ( a,  b);
        break;
       
        default:
        cout << "Opcion no valida"  <<endl;
       
       
    }
    cout << "El valor del resultado es : "<<resultado  <<endl;
}


void calculadora( ){
    int opcion,a,b;
   cout << "Ingrese la operacion que desea realizar  : "<<endl
        << "(1) suma "<<endl
        << "(2) resta "<<endl
        << "(3) multiplicacion "<<endl
        << "(4) division "<<endl;
       
       cin >> opcion ;
    cout << "Ingrese el primer numero : "<<endl;
    cin >>a ;
   cout << "Ingrese el segundo numero : "<<endl;
    cin >>b ;
   
    seleccion(opcion,a,b);
}
