#include <iostream>
#include<string>
using namespace std;

int main(){
  int a;
  cout<<"Tugas Lab.Desain dan analisis algoritma"<<endl;
  cout<<"==============SORTING 1================"<<endl;
  cout<<"\nBerapa jumlah buku yang ingin dimasukkan: ";
  cin>> a;
  string buku[a];
  for (int i=0; i<a; i++){
    cout<<"Masukkan judul buku ke - "<< i+1 <<": ";
    cin>> buku[i];
}
for (int i=1 ; i<a; i++){
  string key = buku[i];
  int j = i-1;
  while (j >= 0 && key < buku[j]){
    buku [j+1] = buku[j];
    j--;
  }
  buku [j+1]= key;
}

cout<<"\n Data buku yang sudah diurutkan: \n";
for (int i = 0; i<a; i++){
  cout<< i+1 <<".) "<<buku[i] <<endl;
 }
return 0;
}