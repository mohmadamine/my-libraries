#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

namespace generation_lib
{

    int random(int from, int To)
    {

        int random = rand() % (To - from + 1) + from;
        return random;
    }

    enum entype_of_symbols
    {
        small_letters = 1,
        capital_letters,
        special_characters,
        digit_numbers
    };

    char random_of_all_symbols(entype_of_symbols symbol)
    {
        switch (symbol)
        {
        case entype_of_symbols::small_letters:
            return char(random(97, 122));
            break;
        case entype_of_symbols::capital_letters:
            return char(random(65, 90));
            break;
        case entype_of_symbols::special_characters:
            return char(random(33, 47));
            break;
        case entype_of_symbols::digit_numbers:
            return random(48, 57);
            break;

        default:
            return '\0';
        }
    }

    string generate_word(entype_of_symbols symbol, short length)
{
    string word = "";
    for (int i = 1; i <= length; i++)
    {
        word = word + generation_lib::random_of_all_symbols(symbol);
    }
    return word;
}
string generate_key()
{
    string key = "";
    key += generate_word(entype_of_symbols::capital_letters, 4) + "-";
    key += generate_word(entype_of_symbols::capital_letters, 4) + "-";
    key += generate_word(entype_of_symbols::capital_letters, 4) + "-";
    key += generate_word(entype_of_symbols::capital_letters, 4);
    return key;
}

void generate_keys(short number_of_keys)
{
    for (int i = 1; i <= number_of_keys; i++)
    {
        cout << "key[" << i << "] : ";
        cout << generation_lib::generate_key() << endl;
    }
}

void fill_array_with_random_number(int arr[100],int &arr_length){
    cout<<"please enter number of array : ";
    cin>>arr_length;
for(int i =0;i<arr_length;i++){
arr[i] = generation_lib::random(1,100);
}
}

    void fill_order_number_in_array(int arr[100], int arr_length)
    {
        for (int i = 0; i < arr_length; i++)
        {
            arr[i] = i + 1;
        }
    }

    void fill_array_with_keys(string arr[100], int arr_length)
{

    for (int i = 0; i < arr_length; i++)
    {
        arr[i] = generate_key();
    }
}

void add_array_element(int number, int arr[100], int &arr_length)
{
    arr_length++;
    arr[arr_length - 1] = number;
}

    void copy_odd_numbers(int arr[100], int odd_numbers_in_arr2[100], int arr_length, int &arr2_length)
    {
        for (int i = 0; i < arr_length; i++)
        {
            if (arr[i] % 2 != 0)
            {
               add_array_element(arr[i], odd_numbers_in_arr2, arr2_length);
            }
        }
    }

}
