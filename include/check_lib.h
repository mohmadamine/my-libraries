#pragma once

#include <iostream>
#include <cmath>
#include"Processing_lib.h"
#include"data_analyzer.h"

using namespace std;


namespace check_lib
{
  bool is_perfect_number(int number)
  {
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
      if (number % i == 0)
      {
        sum += i;
      }
    }
    return number == sum;
  }

  enum enprim_number
  {
    yes = 1,
    no
  };

  enprim_number check_prime_number(int number)
  {

    int M = round(number / 2);
    int i = 2;
    while (i <= M)
    {

      if (number % i == 0)
      {
        return enprim_number::no;
      }
      i++;
    }

    return enprim_number::yes;
  }





 bool is_number_found_in_array(int arr[100], int arr_length, int number)
{
   return data_analyzer::find_number_position_in_array(arr, arr_length, number) != -1;
}

bool check_array_is_palindrome_or_not(int arr[100],int arr_length){
    for(int i =0;i<arr_length;i++){
        if(arr[i]!=arr[arr_length-i-1]){
      
        return false;
        }

    }
       return true;
       
}

string get_final_result(bool ispass)
{
    if (ispass)
    {
        return "pass -)";
    }
    else
    {
        return "fail (-";
    }
}

}
