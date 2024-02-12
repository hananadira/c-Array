#include <iostream>
using namespace std;

int main() {
    
    int x[3][3];
    int y[3][3];

    cout << "nilai x" <<endl;
   for(int i = 0; i < 3; i++){
        for(int a = 0; a < 3; a++)
        {
            cout <<"| " << x[i][a] <<"| ";
            
        }
        cout<<endl;
    }

    cout << endl;

    cout << "nilai y" << endl;
    for(int i = 0; i < 3; i++){
        for(int a = 0; a < 3; a++)
        {
            cout <<"| " << y[i][a] <<"| ";
            
        }
        cout<<endl;
    }

    cout << endl;

    cout << "aritmatika" << endl;

    for(int i = 0; i<3; i++){
        for(int a = 0; a < 3; a++) {
            cout <<"| " << x[i][a] * y[i][a] ;

        }
        cout << endl;
    }
}