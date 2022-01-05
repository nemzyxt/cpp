//Author : Nemuel Wainaina
//Program to delete a file using C++

#include<iostream>

using namespace std;

int main(){
    char* file_name = "test.txt"; //the file to delete

    int result = remove(file_name);

    if(result == 0){
        //if successful, the remove function returns 0
        cout<<"File deleted successfully ."<<endl;
    }
    else{
        cout<<"File not deleted successfully ."<<endl;
    }

    return 0;
}
