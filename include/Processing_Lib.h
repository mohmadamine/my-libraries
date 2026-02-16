#pragma once

#include <iostream>
#include "generation_lib.h"
#include "check_lib.h"
#include <cmath>

using namespace std;

namespace processing_lib
{
    int reversed_number(int number)
    {
        short remainder = 0;
        int number2 = 0;
        while (number > 0)
        {
            remainder = number % 10;
            number2 = number2 * 10 + remainder;
            number = number / 10;
        }
        return number2;
    }

    void print_digits(int number)
    {
        short remainder = 0;
        while (number > 0)
        {
            remainder = number % 10;
            cout << remainder << endl;
            number = number / 10;
        }
    }

    void print_digit(int number)
    {
        int remainder = 0;
        while (number > 0)
        {
            remainder = number % 10;
            number = number / 10;
            cout << remainder << endl;
        }
    }

    int sum_of_digits(int number)
    {
        int sum = 0;
        int remainder = 0;
        while (number > 0)
        {
            remainder = number % 10;
            sum += remainder;
            number = number / 10;
        }
        return sum;
    }

    int reversed_digits(int number)
    {
        int number2 = 0;
        int remainder = 0;
        while (number > 0)
        {
            remainder = number % 10;
            number2 = number2 * 10 + remainder;

            number = number / 10;
        }
        return number2;
    }

    void print_inverted_number_pattern(int number)
    {
        for (int i = number; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i;
            }
            cout << "\n";
        }
        cout << endl;
    }

    void print_number_pattern(int number)
    {
        for (int i = 1; i <= number; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i;
            }
            cout << "\n";
        }
        cout << endl;
    }
    void print_inverted_litter_pattern(int number)
    {
        for (int i = 65 + number - 1; i >= 65; i--)
        {
            for (int j = 1; j <= number - (65 + number - 1 - i); j++)
            {
                cout << char(i);
            }
            cout << "\n";
        }
        cout << endl;
    }

    void print_ltter_pattern(int number)
    {
        for (int i = 65; i <= 65 + number - 1; i++)
        {
            for (int j = 1; j <= i - 65 + 1; j++)
            {
                cout << char(i);
            }
            cout << "\n";
        }
        cout << endl;
    }

    string encrypt_text(string text, short encryption_key)
    {
        for (int i = 0; i <= text.length(); i++)
        {
            text[i] = char(int(text[i]) + encryption_key);
        }
        return text;
    }

    string decrypt_text(string text, short encryption_key)
    {
        for (int i = 0; i <= text.length(); i++)
        {
            text[i] = char(int(text[i]) - encryption_key);
        }
        return text;
    }

    int sum_numbers_with_array(int arr[100], int arr_length)
    {
        int sum = 0;
        for (int i = 0; i < arr_length; i++)
        {
            sum += arr[i];
        }
        return sum;
    }

    float average_number_with_array(int arr[100], int arr_length)
    {
        return float(sum_numbers_with_array(arr, arr_length)) / arr_length;
    }

    void copy_array(int arr_source[100], int arr_copy[100], int arr_length)
    {

        for (int i = 0; i < arr_length; i++)
        {
            arr_copy[i] = arr_source[i];
        }
    }

    void sum_of_2_arrays(int arr[100], int arr2[100], int sum_arrays[100], int arr_length)
    {

        for (int i = 0; i < arr_length; i++)
        {
            sum_arrays[i] = arr[i] + arr2[i];
        }
    }

    void swap(int &num1, int &num2)
    {
        int box;
        box = num2;
        num2 = num1;
        num1 = box;
    }

    void shuffle_array(int arr[100], int arr_length)
    {
        for (int i = 0; i < arr_length; i++)
        {
            swap(arr[generation_lib::random(1, arr_length) - 1], arr[generation_lib::random(1, arr_length) - 1]);
        }
    }

    void copy_array_in_reversed_order(int arr_source[100], int arr_copy[100], int arr_length)
    {
        for (int i = 0; i < arr_length; i++)
        {
            arr_copy[i] = arr_source[arr_length - 1 - i];
        }
    }

    void copy_array_using_add_array_elements(int arr_source[100], int arr_copy[100], int arr_length, int arr2_length)
    {

        for (int i = 0; i < arr_length; i++)
        {
            generation_lib::add_array_element(arr_source[i], arr_copy, arr2_length);
        }
    }

    float my_abs(int number)
    {
        if (number < 0)
        {
            return number * -1;
        }
        else
        {
            return number;
        }
    }

    float get_fraction_part(float number)
    {
        return number - int(number);
    }

    float my_round(float number)
    {
        int intpart = int(number);
        float fraction_part = get_fraction_part(number);
        if (abs(fraction_part) >= .5)
        {
            if (number > 0)
            {
                return ++intpart;
            }
            else
            {
                return --intpart;
            }
        }
        else
        {
            return intpart;
        }
    }
    int my_floor(float number)
    {
        int intpart = int(number);
        if (number > 0)
        {
            return intpart;
        }
        else
        {
            return --intpart;
        }
    }

    int my_ceil(float number)
    {
        float fraction_part = get_fraction_part(number);
        if (abs(fraction_part) > 0)
        {
            if (number > 0)
            {
                return number + 1;
            }
            else
            {
                return number;
            }
        }
        else
        {
            return number;
        }
    }

    float my_sqrt(float number)
    {

        return pow(number, 0.5);
    }

}
