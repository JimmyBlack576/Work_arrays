#include <iostream>

using namespace std;

int main()
{
    
    int arr[3][4], num;
    cout << "Enter the number: \n";
    cin >> num;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = num;
            num *= 2;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

