#pragma once

#include <iostream>

using namespace std;

namespace data_analyzer
{
    int count_digit_frequency(int number, short digit_to_check)
    {
        int remainder = 0, freq_count = 0;

        while (number > 0)
        {
            remainder = number % 10;
            number = number / 10;
            if (digit_to_check == remainder)
            {
                freq_count++;
            }
        }
        return freq_count;
    }

    int time_repeted(int number_to_check, int arr[100], int arr_length)
    {
        int count = 0;
        for (int i = 0; i <= arr_length - 1; i++)
        {
            if (number_to_check == arr[i])
            {
                count++;
            }
        }
        return count;
    }

    int max_of_random_array(int arr[100], int arr_length)
    {
        int max_number = 0;
        for (int j = 0; j < arr_length; j++)
        {

            if (arr[j] > max_number)
            {
                max_number = arr[j];
            }
        }
        return max_number;
    }

    int min_random_number(int arr[100], int arr_length)
    {
        int min_number = arr[0];
        for (int j = 1; j < arr_length; j++)
        {
            if (arr[j] < min_number)
            {
                min_number = arr[j];
            }
        }
        return min_number;
    }

    int find_number_position_in_array(int arr[100], int arr_length, int number)
    {

        for (int i = 0; i <= arr_length; i++)
        {
            if (number == arr[i])
            {
                return i;
            }
        }
        return -1;
    }

    int count_odd_numbers(int source_arr[100], int arr_length)
    {
        int count = 0;
        for (int i = 0; i < arr_length; i++)
        {
            if (source_arr[i] % 2 != 0)
            {
                count++;
            }
        }
        return count;
    }

    int count_event_numbers(int arr[100], int arr_length)
    {
        int count = 0;
        for (int i = 0; i < arr_length; i++)
        {
            if (arr[i] % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }

    int count_positive_numbers(int arr[100], int arr_length)
    {
        int count = 0;
        for (int i = 0; i < arr_length; i++)
        {
            if (arr[i] >= 0)
            {
                count++;
            }
        }
        return count;
    }

    int count_negative_numbers(int arr[100], int arr_length)
    {
        int count = 0;
        for (int i = 0; i < arr_length; i++)
        {
            if (arr[i] < 0)
            {
                count++;
            }
        }
        return count;
    }
}