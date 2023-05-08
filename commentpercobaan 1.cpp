#include <iostream> //file header standar program c++
using namespace std; //kode pendeklarasian untuk memberitahukan compiler bahwa menggunakan semua fungsi/class/file.

void swap(int arr[], int pos1, int pos2){ //fungsi umum
 int temp; //deklarasi var integer temp
 temp = arr[pos1]; //pernyataan bahwa arr[oos1] merupakan temp
 arr[pos1]=arr[pos2]; //pernyataan bahwa arr[pos2] merupakan arr[pos1] yang sama dengan temp
 arr[pos2]=temp; //pernyataan bahwa temp sama dengan arr[pos2].
} //penutup fungsi umum void swap
int partition (int arr[], int low, int high, int pivot){ //fungsi umum
  int i = low; //low sama dengan var int i
  int j = low; //low sama dengan var int j
  while(i<=high){ //pemberian kondisi ketika i lebih kecil/sama dengan nilai high
    if (arr[i]>pivot){ //maka, jika nilai pivot lebih besar dari nilai arr dengan indeks ke-i.
      i++; //maka nilai i+1
    }
    else{ //jika nilai pivot lebih kecil
      swap(arr, i, j); //maka pemanggilan fungsi umum swap
      i++; //akan memerintahkan nilai i+1
      j++; //akan memerintahkan nilaii j+1
    }
  }
  return j-1; //mengembalikan  nilai j dikurangi 1.
}
void quicksort (int arr[], int low, int high){ //fungsi umum
  if (low<high){ //kondisi apabila low lebih kecil dari high
    int pivot = arr[high]; //maka arr[high] sama dengan pivot 
    int pos= partition(arr, low, high, pivot); //maka partition sama dengan pos dengan arr,low,high, dan pivot

    quicksort(arr, low, pos-1); //rumus yang akan digunakan untuk output
    quicksort(arr, pos+1, high); //rumus yang akan digunakan untuk output
  } //penutup kondisi if pada quicksort
} //penutup fungsi umum quicksort
int main (){ //fungsi utama 
  int n; //pendeklarasian var int baru n
  cout<<"Tentukan panjang array: "; //pendeklarasian untuk pengeluaran output
  cin>> n; //penerimaan data var int n untuk diproses
  int arr[n]; //nilai arr sebanyak n indeks
  for(int i = 0; i<n; i++){ //kondisi perulangan sebanyak nilai n 
    cin>>arr[i]; //penerimaan data array dengan menempatkan data pada indeks ke-i
  }
  quicksort (arr, 0, n-1); //pemanggilan fungsi umum quicksort
  cout<<"Berikut adalah array yang telah diurutkan: "; //pendeklarasian untuk pengeluaran output
  for (int i=0; i<n;i++){
    cout<<arr[i]<<"\t"; 
  } 
} //penutup fungsi utama