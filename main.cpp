#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int FULL_SIZE = 12;
    int arr[FULL_SIZE], arr_1[FULL_SIZE / 2], arr_2[FULL_SIZE / 2];
    int size = 10;
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 20 - 10;
    }
    for (int i = 0, j1 = 0, j2 = 0; i < size; i++)
    {
        if (i % 2 == 0) {
            arr_1[j1] = arr[i];
            j1++;
        }
        else {
            arr_2[j2] = arr[i];
            j2++;
        }
        
    }

    cout << "Array 1: ";
    for (short i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    cout << "Array 2: ";
    for (short i = 0; i < (size / 2); i++)
    {
        cout << arr_1[i] << " ";
    }
    cout << endl << endl;

    cout << "Array 3: ";
    for (short i = 0; i < (size / 2); i++)
    {
        cout << arr_2[i] << " ";
    }
    cout << endl << endl;


    /*from 2 arrays to 1 array
    int arr_new[FULL_SIZE], arr_1[FULL_SIZE / 2], arr_2[FULL_SIZE / 2];
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        arr_1[i] = rand() % 20 - 10;
        arr_2[i] = rand() % 20 - 10;
    }


    cout << "Array 1: ";
    for (short i = 0; i < size; i++)
    {
        cout << arr_1[i] << " ";
    }
    cout << endl << endl;
    cout << "Array 2: ";
    for (short i = 0; i < size; i++)
    {
        cout << arr_2[i] << " ";
    }
    cout << endl << endl;

    for (int i = 0, j = 0; i < size * 2; i += 2)
    {
        arr_new[i] = arr_1[j];
        arr_new[i + 1] = arr_2[j];
        j++;
    }

    cout << "Array 3: ";
    for (short i = 0; i < size * 2; i++)
    {
        cout << arr_new[i] << " ";
    }
    cout << endl << endl;*/

    system("pause");
    return 0;
}