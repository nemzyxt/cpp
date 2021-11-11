//Author : Nemuel Wainaina
//This program takes a number from the user and calculates its factorial then prints the factorial of the number back to the user

#include<iostream>

using namespace std;

//Function prototype
int factorial(int);

int main(){
    //declare the variable that is going to hold the number which the user will enter
    int num;
    cout<<"Enter a number whose factorial you want : ";
    cin>>num;
    int fact = factorial(num);
    cout<<"The factorial of "<<num<<" is "<<fact<<".\n";
    return 0;
}

int factorial(int x){
    if(x<=1){
        return 1;
    }
    else{
        //we use recursion here, whereby the function calls itself
        return x * factorial(x-1);
    }
}
