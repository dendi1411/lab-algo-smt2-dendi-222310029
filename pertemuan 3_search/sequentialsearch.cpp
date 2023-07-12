#include <iostream>
using namespace std;

int main (){
  
  int input []= {0, 6, 12, 18, 24};
  int cari, jumlah=5;
  bool ketemu = false;
  int tm = 0, l=0, r = jumlah-1;
  int mid = tm;

  cout<<"==Program sequential search=="<<endl;
  cout <<"\nMasukkan data yang ingin dicari : ";
  cin >>cari;
  
  while (r >= l) {
    int mid = l + (r - l) / 2;
    if (input[mid] == cari) {
      cout << "Bilangan Ditemukan" << endl;
      return 0;
    } else if (input[mid] < cari) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  
  if (ketemu == true){
    cout <<"Bilangan "<<cari<<" ditemukan!"<<endl;
  }else {
    cout <<"Bilangan "<<cari<<" tidak ditemukan!"<<endl;
  }
  return 0;
}