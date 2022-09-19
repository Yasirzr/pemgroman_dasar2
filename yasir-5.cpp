#include <iostream>
using namespace std;
int main()
{
int kehadiran, tugas, uts, uas, ntugas, nuts, nuas, NA, nkehadiran;
cout<<endl<<endl;

cout<<"Masukkan Kehadiran : "; cin>>kehadiran;
cout<<"Masukkan Nilai Tugas : "; cin>>tugas;
cout<<"Masukkan Nilai uts : "; cin>>uts;
cout<<"Masukkan Nilai uas : "; cin>>uas;

nkehadiran = kehadiran*50/100;
ntugas = tugas*55/100;
nuts = uts*60/100;
nuas = uas*65/100;
NA = nkehadiran+ntugas+nuts+nuas;

cout<<"nilai akhir"<<NA<<endl;

}    