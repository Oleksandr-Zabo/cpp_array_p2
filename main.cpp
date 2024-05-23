#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int FULL_SIZE = 12;
    int arr_new[FULL_SIZE], arr_1[FULL_SIZE / 2], arr_2[FULL_SIZE / 2], arr_copy1[FULL_SIZE / 2], arr_copy2[FULL_SIZE / 2];
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

    int index_copy_1 = 0;
    int index_copy_2 = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr_1[i] > 0)
        {
            arr_copy1[index_copy_1] = arr_1[i];
            index_copy_1++;
        };
        if (arr_2[i] > 0)
        {
            arr_copy2[index_copy_2] = arr_2[i];
            index_copy_2++;
        };
    }
    for (int i = 0; i < size; i++)
    {
        if (arr_1[i] == 0)
        {
            arr_copy1[index_copy_1] = 0;
            index_copy_1++;
        };
        if (arr_2[i] == 0)
        {
            arr_copy2[index_copy_2] = 0;
            index_copy_2++;
        };
    }
    for (int i = 0; i < size; i++)
    {
        if (arr_1[i] < 0)
        {
            arr_copy1[index_copy_1] = arr_1[i];
            index_copy_1++;
        };
        if (arr_2[i] < 0)
        {
            arr_copy2[index_copy_2] = arr_2[i];
            index_copy_2++;
        };
    }
    for (int i = 0, j = 0; i < size*2; i+=2)
    {
        arr_new[i] = arr_copy1[j];
        arr_new[i+1] = arr_copy2[j];
        j++;
    }

    cout << "Array 3: ";
    for (short i = 0; i < size*2; i++)
    {
        cout << arr_new[i] << " ";
    }
    cout << endl << endl;



    //from 1 array to 2 arrays
    /*
    * int arr[FULL_SIZE], arr_copy[FULL_SIZE], arr_2[FULL_SIZE / 2], arr_3[FULL_SIZE / 2];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 20 - 10;
    }
    cout << "Array 1: ";
    for (short i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    int index_copy = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            arr_copy[index_copy] = arr[i];
            index_copy++;
        };
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            arr_copy[index_copy] = 0;
            index_copy++;
        };
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            arr_copy[index_copy] = arr[i];
            index_copy++;
        };
    }

    for (int i = 0; i < size / 2; i++)
    {
        arr_2[i] = arr_copy[i];
    }
    for (int i = 0; i < size / 2; i++)
    {
        arr_3[i] = arr_copy[i+(size/2)];
    }

    cout << "Array 1(sorted): ";
    for (short i = 0; i < size; i++)
    {
        cout << arr_copy[i] << " ";
    }
    cout << endl << endl;

    cout << "Array 2: ";
    for (short i = 0; i < size/2; i++)
    {
        cout << arr_2[i] << " ";
    }
    cout << endl << endl;

    cout << "Array 3: ";
    for (short i = 0; i < size/2; i++)
    {
        cout << arr_3[i] << " ";
    }
    cout << endl << endl;*/

    system("pause");
    return 0;
}