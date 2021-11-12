//Author : Nemuel Wainaina
//This is a simple c+= Program that generates 10 random numbers between 1 and 50,
//and prints the random numbers to the user

#include<iostream>
#include<ctime>
#include<cstdlib>
//This header file, cstdlib, is the one containing the rand() function,
//which is the one we are using to generate the random numbers

using namespace std;

int main(){
    int n;
    srand((unsigned) time (NULL));
    //a for loop that is going to keep generating the random numbers for 10 consecutive times,
    //each time printing the random number to the user
    for(int i=1;i<=10;i++){
        n = rand() % 50 + 1;
        cout<<"Random number "<<i<<" is : "<<n<<endl;
    }
    return 0;
}
