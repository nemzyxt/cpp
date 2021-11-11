//Author : Nemuel Wainaina
//This program involves swapping the values of 2 variables

#include<iostream>

using namespace std;

//The function prototype
void swap(int*, int*);

int main(){
    int a = 10;
    int b = 20;
    cout<<"Before Swapping :\n";
    cout<<"\ta = "<<a<<"\n\tb = "<<b<<endl;

    //Calling the function to swap the values of the variables a and b
    swap(&a, &b);


    cout<<"After Swapping :\n";
    cout<<"\ta = "<<a<<"\n\tb = "<<b<<endl;

    return 0;
}

//The actual function definition
void swap(int* x, int* y){
    //declare a temporary variable
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}





