#include<iostream>
#include"generation_lib.h"

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

void print_string_arrays(short number_of_keys)
{
    for (int i = 0; i < number_of_keys; i++)
    {
        cout << "key[" << i +1 << "] : ";
        cout << generation_lib::generate_key() << endl;
    }
}
}