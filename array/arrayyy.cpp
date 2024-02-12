#include <iostream>
using namespace std;

int main() {

    int arr[5];

    for(int input = 0; input < 5; input++) {
        cout << "masukan angka: ";
        cin >> arr[input];
    }

    for (int loop; loop < 5; loop++) {
        cout << "ini angka: " << arr[loop] << endl;  
    }
}