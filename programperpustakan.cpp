#include <iostream>
using namespace std;

struct data {
    char no_buku[10], judul[50], pengarang[100], penerbit[100];
};

data maksimal[100];
int a, b, c, d;

void inputbuku()
{
    cout<<"Berapa jumlah buku yang ingin anda input? : ";
    cin>>b;
    d = 0;
    for( c=0; c<b; c++ )
    {
        d = d + 1;
        cout<<"\nBuku ke - "<< d << endl;
        cout<<"Nomor Buku :\t";cin >> maksimal[a].no_buku;
        cout<<"Judul Buku :\t";cin >> maksimal[a].judul;
        cout<<"Nama Pengarang :\t";cin >> maksimal[a].pengarang;
        cout<<"Nama Penerbit :\t";cin >> maksimal[a].penerbit;
        a++;
    }
}

void lihatbuku()
{
    int y, z;
    cout<<"=========== DAFTAR BUKU ===========\n\n";
    cout<<"||\tNomor\t||\tJudul\t||\tNama Pengarang\t||\tNama Penerbit";
    z = 0;
    for( y=0; y<a; y++ )
    {
        z = z + 1;
        cout<<"=================================\n";
        cout<<"||\t"<<z<<"\t||";
        cout<<maksimal[y].no_buku<<"\t\t||";
        cout<<maksimal[y].judul<<"\t\t||";
        cout<<maksimal[y].pengarang<<"\t\t||";
        cout<<maksimal[y].penerbit<<"\t\t";
        cout<<endl;
    }
    cout<<"==============================\n";
    
}

void hapusbuku()
{
    int y, z;
    cout<<"\nHapus buku ke : ";
    cin>>y;
    z = y - 1;
    a--;
    for( int i=z; i<a; i++ )
    {
        maksimal[i] = maksimal[i + 1];
    }
    cout<<"\n\n ========= Buku "<< z << " Telah terhapus ==============\n";
    getchar();
}

void ubahbuku()
{
    int k, l;
    cout<<"Pilih buku yang ingin anda ubah : "; cin >> k;
    l = k - 1;
    cout<<"Nomor Buku :\t"; cin >> maksimal[1].no_buku;
    cout<<"Judul Buku :\t"; cin >> maksimal[1].judul;
    cout<<"Nama Pengarang :\t"; cin >> maksimal[1].pengarang;
    cout<<"Nama Penerbit :\t"; cin >> maksimal[1].penerbit;
    lihatbuku();
}


int main()
{
    data maksimal[100];
    int a, b, c, d;
    int pilih;
    char x;
    cout<<"Program Perpustakaan\n";
    getchar();
    tampil :
        cout<<"1. Tambah Buku\n";
        cout<<"2. Lihat Buku\n";
        cout<<"3. Ubah Buku\n";
        cout<<"4. Hapus Buku\n";
        cout<<"5. Keluar Perpustakaan" << endl;
        cout<<"Pilihan Kamu : "; cin >> pilih;
    switch( pilih )
    {
        case 1 :
            inputbuku(); goto tampil;
            break;
        case 2 :
            lihatbuku(); goto tampil;
            break;
        case 3 :
            ubahbuku(); goto tampil;
            break;
        case 4 :
            hapusbuku(); goto tampil;
            break;
        case 5:
            cout<<"Apakah anda ingin keluar ? \n";
            cout<<"               1          0               ";
            cout<<"                                          "<<endl; 
            cin>>x;
            
            switch(x)
            {
                case 1:
                    cout<<"Keluar!";
                    break;
                case 0:
                    goto tampil;
                    getchar(); goto tampil;
                    break;
            }
        default:
            break;
    }
    
}