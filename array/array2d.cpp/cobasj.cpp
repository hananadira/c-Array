#include <iostream>
using namespace std;   

int main () {
    int angka[2][5]={
        {1,2,3,4,5}, {6,7,8,9,10}
        };

    // for(int i = 0; i < 1; i++){
    //     for(int a = 0; a < 5; a++)
    //     {
    //         cout << "masukkan angka : ";
    //         cin >> angka[i][a];
    //     }
    // }

    for(int i = 0; i < 2; i++){
        for(int a = 0; a < 5; a++)
        {
            cout <<"| " << angka[i][a] ;
            
        }
        cout << endl;
    }
}