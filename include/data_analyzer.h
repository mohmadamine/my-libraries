#pragma once

#include<iostream>

using namespace std;

namespace count_lib
{
int count_digit_frequency(int number,short digit_to_check){
int remainder = 0,freq_count=0;

while(number>0){
    remainder = number%10;
     number = number/10;
    if(digit_to_check == remainder){
        freq_count++;
    }
  
}
return freq_count;

}
}