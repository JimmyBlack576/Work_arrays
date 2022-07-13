#include <iostream>

using namespace std;
//Функция умножения
void multiplication(int arr[3][4], int* num) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = *num;
            *num *= 2;
        }
    }
}
//Функция прибавления
void addition(int arr[3][4], int* num) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = *num;
            *num+=1;
        }
    }
}
//Функция вывода массива
void ShowArr(int arr[3][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
//функция смещения 
void Task3(int arr1[3][4], int* direction) {
    switch (*direction) {
    case 1:
        int s;
        cout << "Enter position: \n";
        cin >> s;
        do{
            for (int i = 0; i < 3; i++) {
                int temp = arr1[i][0];
                for (int j = 1; j < 4; j++) {
                    arr1[i][j - 1] = arr1[i][j];
                }
                arr1[i][4 - 1] = temp;
                
            }
            s--;
        } while (s != 0);
        break;

    case 2:
        cout << "Enter position: \n";
        cin >> s;
        do {
            for (int i = 0; i < 3; i++) {
                int temp = arr1[i][3];
                for (int j = 3; j >= 0; j--) {
                    arr1[i][j] = arr1[i][j - 1];
                }
                arr1[i][0] = temp;
            }
            s--;
        } while (s != 0);
        break;
    case 3: 
        
        cout << "Enter position: \n";
        cin >> s;
        do{
            for (int j = 0; j < 4; j++) {
                int temp = arr1[0][j];
                for (int i = 0; i < 3; i++) {
                    arr1[i][j] = arr1[i + 1][j];
                }
                    arr1[2][j] = temp;
            }
            s--;
        } while (s != 0);
        break;
    case 4:
        cout << "Enter position: \n";
        cin >> s;
        do {
            for (int j = 0; j < 4; j++) {
                int temp = arr1[2][j];
                for (int i = 2; i >= 0; i--) {
                    arr1[i][j] = arr1[i-1][j];
                }
                arr1[0][j] = temp;
            }
            s--;
        } while (s != 0);
        break;
    default:
        cout << "Wrong menu item!\n";
        break;
    }
}

int main()
{
    int arr[3][4];
    int arr1[3][4] = {
        {2,4,3,5},
        {6,3,8,3},
        {9,4,2,6}
    };
        int num,direction,position;
        cout << "Task 1\n\n";
    cout << "Enter the number: \n";
    cin >> num;
    multiplication(arr, &num);
    ShowArr(arr);
    system("pause");
    system("cls");

    cout << "Task 2\n\n";
    cout << "Enter the number: \n";
    cin >> num;
    addition(arr, &num);
    ShowArr(arr);
    system("pause");
    system("cls");

    cout << "Task 3\n\n";
    ShowArr(arr1);
    cout << endl;
    cout << "Choose direction: \n"
        << "1. Left \n"
        << "2. Right \n"
        << "3. Up \n"
        << "4. Down \n";
    cin >> direction;
    system("cls");
    ShowArr(arr1);
    Task3(arr1, &direction);
    ShowArr(arr1);

    return 0;
}

