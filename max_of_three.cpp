//Author : Nemuel Wainaina
//This program takes 3 numbers as input from the user and finds the maximum of the three

#include<iostream>

using namespace std;

int max_of_three(int, int, int);

int main(){
    int a, b, c;

    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;

    int max = max_of_three(a, b, c);

    cout<<"\n[+]The maximum value of the three numbers is : "<<max<<endl;

    return 0;
}

int max_of_three(int i, int j, int k){
    if(i > j){
        if(i > k){
            return i;
        }
        else{
            return k;
        }
    }
    else{
        if(j > k){
            return j;
        }
        else{
            return k;
        }
    }
}
