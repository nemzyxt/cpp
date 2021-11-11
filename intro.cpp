//Author : Nemuel Wainaina
//This program takes input from the user, the name and the age of the user ...
//then prints back the info

#include<iostream>
#include<string>

using namespace std;

int main(){
    //Declaring the variables that will store the name and age that the user will enter into the program
    string name;
    int age;

    cout<<"Enter your name : ";
    getline(cin, name);
    cout<<"Enter your age : ";
    cin>>age;
    cout<<endl;
    cout<<"Hello "<<name<<", you are "<<age<<" years old !"<<endl;
    cout<<"It's a pleasure to meet you "<<name<<"."<<endl;

    return 0;
}
