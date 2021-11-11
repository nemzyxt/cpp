//Author : Nemuel Wainaina
//This program takes input in form of a number from the user, then checks whether it is even or odd
//and then prints the relevant output to the user

#include<iostream>

using namespace std;

int  main(){
    int num;
    cout<<"Enter a number to check whether it is even or odd : ";
    cin>>num;

    if(num%2==0){
        cout<<"The number you have entered is even ."<<endl;
    }
    else{
        cout<<"The number you have entered is odd ."<<endl;
    }

    return 0;
}
