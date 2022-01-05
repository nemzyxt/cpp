//Author : Nemuel Wainaina
//A Program to list all the files in the specified directory using C++

#include<iostream>
#include<conio.h>
#include<dirent.h>

using namespace std;

int main(){
    DIR* dir;
    dirent* pdir;

    //open the directory
    dir = opendir("C:\\Users\\USER\\Desktop\\");

    //loop to list all the files in the current directory ...
    while(readdir(dir)){
        pdir = readdir(dir);
        cout<<pdir->d_name<<endl;
    }

    //close the pointer to the directory
    closedir(dir);

    return 0;
}
