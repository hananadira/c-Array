
#include <iostream>
using namespace std;

int main() {
    // array 1 dimensi
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) 
    {
        cout << arr[i] <<endl;
    }
    // array multi dimensi
    // kolom kebawah, baris kesamping
    // apapun yang di bukus oleh array akan dibaca sebagai elemen
    // setiap elemen memiliki index
    int angka[3][5] = {
        {1, 2, 3, 4, 5}, // ini adalah elemen
        {1, 2, 3, 4, 5},
        {1, 2, 3, 9, 5}
    };
    cout << angka[2][3] <<endl; // yang di ketik adlah index nya (dimulai dari 0)

    // looping

    int angka[3][2] = {
        {1, 2}, // ini adalah elemen
        {1, 2},
        {1, 2}
    };
    
    for(int i = 0; i < 3; i++){
        for(int a = 0; a < 2; a++)
        {
            cout << angka[i][a] <<endl;
        }
    }
}

