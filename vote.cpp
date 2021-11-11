//Author : Nemuel Wainaina
//This program asks for the age from the user
//Based on the age, the program informs the user whether or not they are eligible for voting

#include<iostream>

using namespace std;

int main(){
    //the variable that is to hold the age of the user
    int age;
    cout<<"Hello, enter your age : ";
    cin>>age;
    if(age>=18){
        cout<<"You are eligible to vote."<<endl;
    }
    else if(age>0 && age<18){
        cout<<"You are not eligible to vote"<<endl;
    }
    else{
        cout<<"Invalid age!!!"<<endl;
    }
    return 0;
}
