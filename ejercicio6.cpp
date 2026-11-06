#include <cassert>
#include <string>
#include <iostream>
#include <limits>

using namespace std;

int* responder(int* array, int n, int& largo){
    int medio=-1;
    int j=0;
    int* mitad = new int[n / 2];
    for(int i=1000;i>-1;i--){
        while(array[i]>=2){
            mitad[j]=i;
            j++;
            array[i]-=2;
        }
        if(array[i]==1){
            if(medio==-1){
                medio=i;
            }
        }
    }
    largo=2*j;
    if(medio!=-1){
        largo++;
    }
    int k=largo-1;
    int* respuesta=new int[largo];
    for(int i=0; i<j;i++){
        int a=mitad[i];
        respuesta[i]=a;
        respuesta[k]=a;
        k--;
    }
    if (medio!=-1){
        respuesta[j]=medio;
    }
    delete[] mitad;
    return respuesta;
}


int main(){
    int n=0;
    cin>>n;
    int* array=new int[1001]();
    for(int i=0;i<n;i++){
        int numero;
        cin>>numero;
        array[numero]++;
    }
    int largo;
    int* respuesta=responder(array, n, largo);
    delete[] array;
    for(int i=0; i<largo;i++){
        if(i!=0){
            cout<<" ";
        }
        cout<< respuesta[i];
    }
    cout << "\n";
    delete[] respuesta; 
    return 0; 
}
