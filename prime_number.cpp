//Author : Nemuel Wainaina
//This program takes an input from the user and checks if the number is a prime number or not

#include<iostream>

int main(){
    //declare a variable that will hold the user input
    int num;
    std::cout<<"Enter the number to check whether it is prime or not : ";
    std::cin>>num;

    //The logic: a prime number has only 2 factors, one and the number itself
    //Therefore, if the number has more than 2 factors, then it is not a prime number
    int factors = 0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            factors++;
        }
    }

    if(factors==2){
        std::cout<<"The number "<<num<<" is a prime number."<<std::endl;
    }
    else{
        std::cout<<"The number "<<num<<" is not a prime number."<<std::endl;
    }

    return 0;
}
