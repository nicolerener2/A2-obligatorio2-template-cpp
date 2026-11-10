#include <cassert>
#include <string>
#include <iostream>
#include <limits>

using namespace std;

int* intercalar(int* arr1, int* arr2, int n1, int n2) {
  int* ret = new int[n1 + n2];

  int i = 0, j = 0, k = 0;
  while (i < n1 && j < n2) {
    if (arr1[i] < arr2[j]) {
      ret[k++] = arr1[i++];
    } else {
      ret[k++] = arr2[j++];
    }
  }

  while (i < n1) {
    ret[k++] = arr1[i++];
  }

  while (j < n2) {
    ret[k++] = arr2[j++];
  }

  return ret;
}

int* mergeSort(int* array, int inicio, int fin, long long& remontadas){
  if(inicio == fin){
    int* ret = new int[1];
    ret[0] = array[inicio];
    return ret;
  }
  int mitad = (inicio + fin) / 2;

  int* ord1 = mergeSort(array, inicio, mitad, remontadas);
  int* ord2 = mergeSort(array, mitad + 1, fin, remontadas);
  int n1= mitad-inicio+1;
  int n2=fin-mitad;
  int j = 0;
for (int i = 0; i < n1; i++) {
    while (j < n2 && ord1[i] > 2 * ord2[j]) {
        j++;
    }
    remontadas += j;
}
  int* resultado=intercalar(ord1, ord2, n1,n2);
  delete[] ord1;
  delete[] ord2;
  return resultado;
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
    long long respuesta= 0;
    int* ordenado= mergeSort(array,1,num,respuesta);
    cout << respuesta << "\n";
    delete[] ordenado;
    delete[] array;
    return 0;
}