#pragma once

#include<iostream>

using namespace std;

namespace math_lib
{
int reversed_number(int number){
short remainder = 0;
int number2 = 0;
while(number>0){
remainder = number%10;
number2 = number2*10 + remainder;
number = number/10;
}
return number2;

}
}