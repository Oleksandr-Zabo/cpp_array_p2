#include <iostream>
#include <ctime>
using namespace std;
//lab-1
int main()
{
	srand(time(0));
    const int FULL_SIZE = 15;
    int arr[FULL_SIZE];
    int size;
    do
    {
        cout << "Enter the size of the array: ";
        cin >> size;
    } while (size > FULL_SIZE || size <= 0);
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 4 - 1;
    }
    cout << "Array: ";
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;


    if (size > 0)
    {
        int num_zero = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == 0)
            {
                num_zero++;
            }
        }

        for (int i = 0; i < num_zero; i++)
        {
            for (int i = 0; i < size; i++)
            {
                if (arr[i] == 0)
                {
                    for (int j = i; j < size; j++)
                    {
                        arr[j] = arr[j + 1];
                    }

                }
            }
        }
        
        
        for (int i = 1; i <= num_zero; i++)
        {
            arr[size - i] = -1;
        }
        cout << endl;
        cout << "Array: ";
        for (size_t i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl << endl;
        
    }
    else
    {
        cout << "Array is empty!" << endl;
    }
    
	cout << "The end..." << endl;
	system("pause");
	return 0;
}