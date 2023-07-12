#include <iostream> //file header standar program c++
using namespace std; 

class contoh { //fungsi class yang dideklarasikan
  private : //pemberian akses private untuk var int nilai
  int nilai; //var nilai dengan tipe data int pada akses private

  public : //pemberian akses public agar dapat diakses diluar class
  contoh (int n){ // Pendeklarasian setter agar dapat memasukkan nilai pada "nilai"
    nilai = n; //menghubungkan var n merupakan class nilai
  }
 
  int getNum (){  //Pendeklarasian getter untuk mengambil nilai yang sudah dimasukkan pada fungsi setter
    return nilai; //mengembalikan nilai
  }
}; //penutup class

int main (){ //fungsi utama
  contoh obj(10); //mengalokasikan nilai untuk class menggunakan constructor
  cout <<"nilai yang diinput: "<<obj.getNum()<<endl; //output u
  return 0;
}

//*Program ini merupakan penerapan constructor*//