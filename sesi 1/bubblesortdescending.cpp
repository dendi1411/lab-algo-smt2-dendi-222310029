#include <iostream>
using namespace std;

void bubblesort(int arr[], int n){
  int i, j, tmp;
  for (i = 0; i<n; i++){
    for (j=0 ; j<n-1; j++){
      if(arr[j]<arr[j+1]){
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
}

int main (){
  int array[100], n ,i, j;
  cout<<"Masukkan banyak elemen: ";
  cin >>n;
  cout<<"Masukkan nilai: \n";
  for(i=0; i<n; i++){
    cin>> array[i];
  }
  bubblesort(array, n);
  cout<<"Hasil pengurutan dengan algoritma bubble sort : \n";
  for (i=0; i<n; i++){
    cout<< array [i]<< " ";
  }
  cout<<"\n";
}