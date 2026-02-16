#pragma once

#include<iostream>
#include"generation_lib.h"

using namespace std;

namespace read_lib
{
 
float read_positive_number(string message){
float number ;
do{
cout<<message;
cin>>number;
}while(number<=0);

return number;
}

string read_password(string message)
{
    string password;
    cout << message;
    cin >> password;
    return password;
}

string read_text(){
    string text;
   cout<<"please enter text : " ;
   cin>>text;
   return text;
}

void read_array(int arr[100],int &arr_length){
    cout<<"please enter number of element : ";
    cin>>arr_length;
    cout<<"enter array element : \n";
    for(int i = 0;i<arr_length;i++){
    cout<<"element ["<<i+1<<"] : ";
    cin>>arr[i]; 
    }
    cout<<endl;

}

void input_user_in_array(int arr[100], int &arr_length)
{
    bool addmore = true;

    do
    {
        generation_lib::add_array_element(read_lib::read_positive_number("please enter a positiv number to add to the array : "), arr, arr_length);
        cout << "\ndo you want to add more number (Yes[1] or No[0]) : ";
        cin >> addmore;
    } while (addmore);
    cout << endl;
}

} 

