#include <iostream>
#define MAX 10
 
using namespace std;
 
int nomer[MAX];
int kepala=-1, rear=-1, k=1;
 
bool IsEmpty(){
   if(rear == -1){
       return true;
   }else{
       return false;
   }
}
bool IsFull(){
   if(rear == MAX-1){
       return true;
   }else{
       return false;
   }
}
void Masuk(int ya){
    if (IsEmpty()){
        kepala=rear=0;
    }else {
        rear++;
    }
    nomer[rear]=ya;
}
void Keluar(){
    if(IsEmpty()){
        cout<<"Antrian sudah kosong ! ";
 
    } else {
        for(int j=kepala;j<rear;j++){
            nomer[j]=nomer[j+1];
        }
        rear--;
        if(rear == -1){
            kepala = -1;
        }
    }
}
void Clear(){
     kepala=rear=-1;
     k=1;
}
 
int main(){
    int pilihan, urutan;
    do{
            cout << "================================="<<endl;
            cout << "==== PROGRAM ANTRIAN LOKET ====="<<endl;
            cout << "================================="<<endl;
            cout << "1. Tambahkan Antrian            "<<endl;
            cout << "2. Panggilkan Antrian           "<<endl;
            cout << "3. Hapus Semua antrian          "<<endl;
            cout << "4. Exit                         "<<endl;
            cout << "================================="<<endl;
        cout << "\nPilih  : "; cin >> pilihan;
        cout <<endl;
        if(pilihan == 1){
            if(IsFull()) {
                cout<<"Antrian sudah penuh, mohon tunggu beberapa saat lagi ";
            }
            else{
                urutan=k;
                Masuk(urutan);
                cout << "No. Antrian          : "<< k<<endl;
                cout << "Antian yang Menunggu : "<< rear<<endl;
                k++;
            }
        }
        else if(pilihan == 2){
            cout << "Untuk Nomor Antrian " << nomer[kepala] << endl;
            Keluar();
            cout << "Silahkan! Anda Dipanggil!" << endl;
        }
        else if(pilihan == 3){
            Clear();
            cout<<"\nAntrian Berhasil dikosongkan ! ";
        }
        else if(pilihan == 4){
            cout << "Program selesai! "<< endl;
        }
        getchar();
    }
    while(pilihan!=4);
}