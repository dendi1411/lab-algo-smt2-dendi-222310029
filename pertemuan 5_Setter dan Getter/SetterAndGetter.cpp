#include <iostream>
#include <string>

using namespace std;

class perpustakaan {
  private :
  string Pinjem_buku;
  string kembali_buku;

  public :
  void setPinjem_buku (string p){
    Pinjem_buku = p;
  }
  void setkembali_buku (string s){
    kembali_buku = s;
  }

  string getPinjem_buku (){
    return Pinjem_buku;
  }
  string getkembali_buku (){
    return kembali_buku;
  }
};

int main (){
  int pilih;
  char pinjam, kembali, akhir;
  perpustakaan Perpustakaan;
  
  awal:
  cout<<"Pilih : "<<endl;
  cout <<"1. lihat buku yang dipinjam Risma"<<endl;
  cout <<"2. lihat buku yang dikembalikan Risma"<<endl;
  cout<<"Masukkan kode pilihan: ";
  cin>> pilih;

  Perpustakaan.setPinjem_buku("Sejarah dunia yang disembunyikan");
  Perpustakaan.setkembali_buku("Filosofi Teras dan Rentang waktu");
  
  if (pilih == 1){
    cout <<"\nJudul buku yang dipinjam : "<<endl;
    cout <<Perpustakaan.getPinjem_buku()<<endl;
  }else {
    cout<<"\nJudul buku yang harus dikembalikan: "<<endl;
    cout<<Perpustakaan.getkembali_buku()<<endl;

  }
  cout <<"\n\nApakah anda ingin mengakhiri program?"<<endl;
  cin>>akhir;
  if (akhir == 't'||akhir == 'T'){
    goto awal;
  }
  if (akhir == 'y'|| akhir == 'Y'){
    goto done;
  }
  done :

  return 0;
}