#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int full_memory_size = 15;
    int arr[full_memory_size], size = 10;
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 38 - 20;
    }
    cout << "Array: ";
    for (short i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << endl;
    cout << "Average temperature: " << (double)(sum / size);
    cout << endl;
    int tem, num_t=0;
    do
    {
        cout << "Enter your temperature: ";
        cin >> tem;
    } while (tem < -20 || tem > 20);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < tem)
        {
            num_t++;
        }
    }
    cout << "The air temperature dropped below"<<
        " than the specified mark.: " << num_t;
    cout << endl;

    cout << endl;
    system("pause");
    return 0;
}