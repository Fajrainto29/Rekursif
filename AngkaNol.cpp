#include<iostream>

using namespace std;

int zero(int angka)
{
static int hitung=0;
    if(angka>0)
    {

        if(angka%10==0)
        hitung++;

        zero(angka/10);
    }
    else {
    }
    return hitung;
}

int main()
{
    int n;
    cout<<"Nama : Muhammad Fajrianto"<<endl;
    cout<<"NPM : G1A019037\n"<<endl;
    cout<<"<<<<<<<<<<Menghitung Jumlah Angka Nol>>>>>>>>>>\n"<<endl;
    cout<<"Masukkan angka :";
    cin>>n;
    cout<<"Banyak angka nol : "<<zero(n);
}