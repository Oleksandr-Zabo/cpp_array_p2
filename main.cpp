#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int FULL_SIZE = 12;

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

    for (int i = 0; i < size; i++)
    {
        arr_new[i] = arr_1[i] + arr_2[i];
    }

    cout << "Array 3: ";
    for (short i = 0; i < size; i++)
    {
        cout << arr_new[i] << " ";
    }
    cout << endl << endl;

    system("pause");
    return 0;
}