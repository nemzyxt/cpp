//Author : Nemuel Wainaina
//This is a program that converts the temperature from celsius to fahrenheit

#include<iostream>

using namespace std;

int main(){
    int celsius;
    float fahrenheit;

    cout<<"Enter the temperature in Celsius : ";
    cin>>celsius;

    fahrenheit = (celsius * 1.8) + 32;

    cout<<"\n[+]The temperature in Fahrenheit is : "<<fahrenheit<<endl;

    return 0;
}
