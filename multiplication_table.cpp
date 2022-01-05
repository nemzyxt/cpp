//Author : Nemuel Wainaina
//Program takes a number as input from the user and prints multiplication table of the number up to ten

#include<iostream>

using namespace std;

int main(){
    int num;

    cout<<"Enter the number whose multiplication table you would like printed : ";
    cin>>num;

    for(int i = 1; i <= 10; i++){
        printf("%2d x %2d = %d \n", num, i, num * i);
    }

    return 0;
}
