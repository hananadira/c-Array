#include <iostream>
using namespace std;

int main() 
{
    int j, i, menang[15], kalah[15];
    int nilai[15];
    string nama [15];
    char ulang;

    do 
    {
    cout << "Berapa jumlah yang ikut turnamen? ";
    cin >>j;
    
    for (i=0;i<j;i++){
        cout<<"Masukkan Nama club ke-" <<i+1<<" = ";
        cin>>nama[i];
        cout << "Masukkan nilai main"<<i+1<<" = ";
        cin >>nilai[i];
        cout<<"Masukan point menang" <<i+1<<" = ";
        cin >>menang[i];
        cout<<"Masukan point kalah" <<i+1<<" = ";
        cin >>kalah[i];
    }

    cout << endl;
    cout<< "HASIL PERTANDINGAN " << endl;
    cout<< "    BOLA VOLLLY    " << endl;
    cout<< "TURNAMEN ANTAR SMP" << endl;
    cout<< "___________________________________________" << "\n";
    cout<< "NO|   CLUB        |MAIN   |MENANG   |KALAH|" << "\n";
    cout<< "___________________________________________" << "\n";

    for (i=0;i<j;i++){
        cout <<i+1<<"    "<<nama[i]<<"  "<<nilai[i]<<"   "<<menang[i]<<"   "<<kalah[i]<<endl;
    }

    cout<< "___________________________________________" << "\n";


}
}