//HANA NADIRA SAVAIRA
#include <iostream>
using namespace std;

int main ()
{
    int i,j, max, min;
    int nilai[10];
    string nama[10];
    float jumlah, rata;
    char ulang;

    do 
    {
    cout << "Berapa jumlah elemen yang ingin diisi? ";
    cin >>j;
    
    for (i=0;i<j;i++){
        cout<<"Masukkan Nama Siswa ke-" <<i+1<<" = ";
        cin>>nama[i];
        cout << "Masukkan nilai ke-"<<i+1<<" = ";
        cin >>nilai[i];
    }
    
    cout << "\n";
    cout << "DAFTAR NILAI MATEMATIKA" << endl;
    cout << "PPLG X-4" << endl;
    cout << "SMK WIKRAMA BOGOR" << endl;
    cout << "================================" << endl;
    cout << "NO."<<"          "<<"NAMA"<<"          "<<"NILAI" << endl;
    cout << "================================" << endl;

    for (i=0;i<j;i++)
    {
        cout <<i+1<<"            "<< nama [i]<<"            "<< nilai [i]<<endl;   
    } 

    cout << "================================" << endl;

    for (i=0;i<j;i++)
    {
        if(nilai[i] > max)
        {
            max = nilai[i];
        }
    }

    for (i=0;i<j;i++)
    {
        if(nilai[i] < min)
        {
            min = nilai[i];
        }
    }

    jumlah = 0;
    for(i = 0; i < j; i++)
    {
        jumlah = jumlah+nilai[i];
    }
    rata = (jumlah/j);

    cout<<"Nilai Terbesar: "<<max<<endl;
    cout<<"Nilai Terkecil: "<<min<<endl;
    cout<<"Nilai rata-rata adalah: "<<rata<<endl;

    cout << endl;
    cout << "Ingin menghitung ulang (y/t)? ";
    cin >> ulang;
    cout << endl;
    
    
    } while (ulang =='y' || ulang =='Y');
        if (ulang == 't' || ulang =='T'){
            cout << "YAUDAH!";
        } else {
            cout << "Nilai Invalid" << endl;
        }
    
    
    
    //return 0;
}