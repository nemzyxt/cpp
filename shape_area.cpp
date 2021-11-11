//Author : Nemuel Wainaina
//This program displays a menu to the user, from which the user selects a shape of their choice
//The program then directs them based on the shape of their choice

#include<iostream>
#include<cmath>
#include<cstdlib>

//Sample shapes : Rectangle, Circle, Square, Triangle
//The function prototypes
void rect_area();
void circ_area();
void sq_area();
void tri_area();

using namespace std;

int main(){
    cout<<"Welcome ... \n";
    cout<<endl;
    input_scr:
    cout<<"1. Rectangle\n2. Circle\n3. Square.\n4. Triangle\n\n";
    cout<<"Enter your choice of shape whose area you would like to find (1, 2, 3, 4) : ";

    //variable to hold the choice of shape by the user
    int shape;
    cin>>shape;

    switch(shape){
         case 1:
            system("cls");
            rect_area();
            break;
        case 2:
            system("cls");
            circ_area();
            break;
        case 3:
            system("cls");
            sq_area();
            break;
        case 4:
            system("cls");
            tri_area();
            break;
        default:
            cout<<"Invalid Choice ... Would you like to try again ? ['y', 'n'] : ";
            char ch;
            cin>>ch;
            if(ch=='y'){
                system("cls");
                goto input_scr;
            }
            else{
                exit(EXIT_FAILURE);
            }
            break;
    }
    return 0;
}

//Actual function definitions
void rect_area(){
    cout<<"**********RECTANGLE**********\n\n";
    int length, width;
    cout<<"Enter the length : ";
    cin>>length;
    cout<<"Enter the width : ";
    cin>>width;
    int area = length * width ;
    cout<<"The area of a rectangle of length "<<length<<" and width "<<width<<" is "<<area<<endl;
}

void circ_area(){
    cout<<"**********CIRCLE**********\n\n";
    const float PI = 3.142;
    int diameter;
    cout<<"Enter the diameter of the circle : ";
    cin>>diameter;
    float radius = diameter/2;
    float area = PI * radius * radius;
    cout<<"The area of a circle of radius "<<radius<<" is "<<area<<endl;
}

void sq_area(){
    cout<<"**********SQUARE**********\n\n";
    int side;
    cout<<"Enter the length of the square : ";
    cin>>side;
    int area = side * side;
    cout<<"The area of a Square of length "<<side<<" is "<<area<<endl;
}

void tri_area(){
    cout<<"**********TRIANGLE**********\n\n";
    //Variables to hold lengths of the three sides of the triangle
    int s1, s2, s3;
    cout<<"Enter the length of side 1 of the triangle : ";
    cin>>s1;
    cout<<"Enter the length of side 2 of the triangle : ";
    cin>>s2;
    cout<<"Enter the length of side 3 of the triangle : ";
    cin>>s3;
    float perimeter, semi;
    perimeter = s1 + s2 + s3;
    semi = perimeter/2;
    float area = sqrt(semi * (semi-s1) * (semi-s2) * (semi-s3));
    cout<<"The area of a Triangle of sides "<<s1<<", "<<s2<<" and "<<s3<<" is "<<area<<endl;

}
