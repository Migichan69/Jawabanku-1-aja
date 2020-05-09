#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string nama, alamat, hobi[3];
    int umur, a,b,c,d,e,f;
    bool menikah, coding;
    struct
    {
        int idn, masuk, keluar, mapel;
    }daftar_sekolah [7];

    struct
    {
        int idk, level;
    }kemampuan [10];

    cout<<"Nama   : ";cin>>nama;
    cout<<"Umur   : ";cin>>umur;
    cout<<"Alamat : ";cin>>alamat;

    cout<<"Banyak Hobi: ";cin>>b;
    for (a=1; a<=b; a++)
    {
        cout<<"Hobi: ";cin>>hobi[a];
    }
    cout<<"Untuk pertanyaan apakah masukkan jika benar=1 dan salah=0"<<endl;
    cout<<"Apakah sudah menikah? ";cin>>menikah;
    if(menikah==true)
    {
        cout<<"Ya"<<endl;
    }
    else
    {
        cout<<"Tidak"<<endl;
    }

    cout<<"Daftar Sekolah: ";cin>>d;
    for (c=1; c<=d;c++)
    {
        cout<<"ID Nama        : ";cin>>daftar_sekolah[c].idn;
        cout<<"Tahun Masuk    : ";cin>>daftar_sekolah[c].masuk;
        cout<<"Tahun Keluar   : ";cin>>daftar_sekolah[c].keluar;
        cout<<"Mata Pelajaran : ";cin>>daftar_sekolah[c].mapel;
    }

    cout<<"Kemampuan: ";cin>>f;
    for (e=1; e<=f;e++)
    {
        cout<<"ID Kemampuan: ";cin>>kemampuan[e].idk;
        cout<<"Level: 1.Pemula, 2.Menengah, 3.Ahli "<<endl;
        cout<<"Pilih Level: ";cin>>kemampuan[e].level;
        if(kemampuan[e].level==1)
        {
            cout<<"Pemula"<<endl;
        }
        else if(kemampuan[e].level==2)
        {
            cout<<"Menengah"<<endl;
        }
        else if(kemampuan[e].level==3)
        {
            cout<<"Ahli"<<endl;
        }
    }

    cout<<"Apakah tertarik ngoding? ";cin>>coding;
    if(coding==true)
    {
        cout<<"Ya"<<endl;
    }
    else
    {
        cout<<"Tidak"<<endl;
    }

    return 0;
}
