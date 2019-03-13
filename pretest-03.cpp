/*
Nama        : Shania Salsabila
NPM         : 140810180014
Kelas	    : B
Deskripsi   : pretest-03
Tanggal     : 13 Maret 2019
*/
#include <iostream>
using namespace std;

struct r_mhs {
    char NPM[14];
    char nama[40];
    float ipk;
};

typedef r_mhs larikMhs[32];

larikMhs mhs;

void banyakData(int& n){
    cout<<"Banyak data: ";cin>>n;
    cout<<endl;
}
void inputMhs(larikMhs& mhs, int n){
    for (int i=0; i<n; i++){
        cout<<"masukan data mahasiswa ke- "<<(i+1)<<endl;
        cout<<"NPM      : ";cin>>mhs[i].NPM;
        cout<<"Nama     : ";cin>>mhs[i].nama;
        cout<<"IPK    : ";cin>>mhs[i].ipk;
        }
}
void cetakMhs(larikMhs& mhs, int n){
    cout<<"CETAKAN DATA MAHASISWA"<<endl;
    for(int i=0;i<n;i++){
        cout<<mhs[i].NPM<<" "<<mhs[i].nama<<" "<<mhs[i].ipk<<" "<<endl;
    }
}
 int main(){
 larikMhs mhs;
 int n;
 banyakData(n);
 inputMhs(mhs,n);
 cout <<endl<<endl;
 cetakMhs(mhs,n);
 }
