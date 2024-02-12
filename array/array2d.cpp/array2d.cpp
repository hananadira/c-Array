#include <iostream>
using namespace std;

int main() {
    
    char ulang;

    do 
    {
    int aa;
    int bb;
    string op;

    cout << "masukan jumlah baris : " ;
    cin >> aa;
    cout << "masukan jumlah kolom : " ;
    cin >> bb;

    int x[aa][bb];  
    int y[aa][bb];

     for(int i = 0; i < aa; i++){
        for(int a = 0; a < bb; a++)
         {
             cout << "masukkan nilai x : ";
             cin >> x[i][a];
         }
    }

    for(int i = 0; i < aa; i++){
        for(int a = 0; a < bb; a++)
         {
             cout << "masukkan nilai y : ";
             cin >> y[i][a];
         }
    }

    cout << endl;

    cout << "nilai x" <<endl;
   for(int i = 0; i < aa; i++){
        for(int a = 0; a < bb; a++)
        {
            cout <<"| " << x[i][a] <<"| ";
            
        }
        cout<<endl;
    }

    cout << endl;

    cout << "nilai y" << endl;
    for(int i = 0; i < aa; i++){
        for(int a = 0; a < bb; a++)
        {
            cout <<"| " << y[i][a] <<"| ";
            
        }
        cout<<endl;
    }

    cout << endl;
    cout << "pilih opaerator yang anda inginkan (+ - * / %): ";
    cin >> op;

    if(op =="+"){
        cout << "ARITMATIKA PERTAMBAHAN" << endl; 
        for (int i = 0; i < aa; i++) {
            for (int a = 0; a < bb; a++) {
                cout << "| " << x[i][a] + y[i][a]<< "| ";
            }
        }
    }

    else if(op =="-"){
        cout << "ARITMATIKA PENGURANGAN" << endl; 
        for (int i = 0; i < aa; i++) {
            for (int a = 0; a < bb; a++) {
                cout << "| " << x[i][a] - y[i][a]<< "| ";
            }
        }
    }

    else if(op =="*"){
        cout << "ARITMATIKA PERKALIAN" << endl; 
        for (int i = 0; i < aa; i++) {
            for (int a = 0; a < bb; a++) {
                cout << "| " << x[i][a] * y[i][a]<< "| ";
            }
        }
    }

    else if(op =="/"){
        cout << "ARITMATIKA PEMBAGIAN" << endl; 
        for (int i = 0; i < aa; i++) {
            for (int a = 0; a < bb; a++) {
                cout << "| " << x[i][a] / y[i][a]<< "| ";

            }
        }
    }           

    else if (op=="%") {
        cout<< "OPERATOR MODULUS" << endl;
        cout<< endl;
    for (int i = 0; i < aa; i++) {
            for (int a = 0; a < bb; a++) {
               
                if (x[i][a] % y[i][a] == 0) {
                    cout << " | " << " GENAP " << " | ";
                    } 
                else if (x[i][a] % y[i][a] == 1) {
                    cout << " | " << " GANJIL " << " | ";
                }
                else {
                    cout << " | " << " NILAI INVALID " << " | ";
                }
                
            }
            cout << endl;
    }
    }


    cout << endl;
    cout << "Ingin menghitung ulang (y/t)? ";
    cin >> ulang;
    cout << endl;
    
    } while (ulang =='y'|| ulang =='Y');
        if (ulang == 't'|| ulang =='T'){
            cout << "THANK YOU!";
        } 
}