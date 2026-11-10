#include <cassert>
#include <string>
#include <iostream>
#include <limits>

using namespace std;

int* copiar(int* array, int inicio, int fin) {
  int* copia = new int[fin - inicio + 1];
  for(int i = inicio; i <= fin; i++)
    copia[i - inicio] = array[i];
  return copia;
}

long long cant(int* array, int tam) {
    if (tam <= 1) return 0;
    
    int mitad = (tam) / 2;
    int* copia1 = copiar(array, 0, mitad-1);
    int* copia2 = copiar(array, mitad, tam-1);
    long long cant1 = cant(copia1, mitad);
    long long cant2 = cant(copia2, tam - mitad);
    delete[] copia1;
    delete[] copia2;
    return cant1+cant2;
}

int main(){
    int num;
    cin >> num;
    int* array=new int[num+1];
    for(int i=1;i<num+1;i++){
        int pos;
        cin>>pos;
        array[i]=pos;
    }
    long long respuesta= cant(array, num+1);
    cout << respuesta << "\n";
    delete[] array;
    return 0;
}

// por cada elemento hay que revisr todo los siguientes, podria guardar en un array para guardar los datos
// puedo usar dividr y conquistar dividiendo el array en la mitad y evaluando cada mitad
// porque mergesort?
// use el coidgo de las diapos como base (el ejemplo de encontrar minimo)
// usamos long long para la funcon porque la letra dcie que La cantidad de remontadas épicas puede superar el rango de un entero de 32 bits.
// esxplicar como decide que sort use 
// el array lo creo en num+1 asi cada pos corresponde a la pos que llegaron (no uso el 0)