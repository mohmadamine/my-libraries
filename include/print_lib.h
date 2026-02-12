#include<iostream>

using namespace std;

namespace print_lib
{
void print_array(int arr[100], int arr_length)
{
    for (int i = 0; i < arr_length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
}