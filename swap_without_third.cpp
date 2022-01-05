//Author : Nemuel Wainaina
//Swapping the values in 2 variables without using a third variable

#include<iostream>

using namespace std;

int main(){
    int a, b;

    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;

    cout<<"Before swapping : a = "<<a<<" and b = "<<b<<endl;

    //perform the swap ...
    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"After swapping : a = "<<a<<" and b = "<<b<<endl;

    return 0;
}
