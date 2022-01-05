//Author : Nemuel Wainaina
//This is a program that converts currency in dollars to shillings

#include<iostream>

using namespace std;

#define RATE 113.05

int main(){
    float dollars, shillings;

    cout<<"Enter the amount in dollars : ";
    cin>>dollars;

    shillings = dollars * RATE;

    cout<<"\n[+]The amount in shillings is : "<<shillings<<endl;
    return 0;
}
