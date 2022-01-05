//Author : Nemuel Wainaina
//Program that allows the user to perform various operations regarding shapes

#include<iostream>
#include<cmath>
#include<windows.h>

using namespace std;

class Rect{
    int length, width;

    public:
    Rect(){
        cout<<"Enter the length : ";
        cin>>length;
        cout<<"Enter the width : ";
        cin>>width;
    }

    int getPerimeter(){
        return 2 * (length + width);
    }

    int getArea(){
        return length * width;
    }

    void display(){
        cout<<"The length is : "<<length<<endl;
        cout<<"The width is : "<<width<<endl;
        cout<<"The perimeter is : "<<getPerimeter()<<endl;
        cout<<"The area is : "<<getArea()<<endl;
    }
};

class Circle{;
    const float PI = 3.142;
    int radius;
    public:
    Circle(){
        cout<<"Enter the radius of the circle : ";
        cin>>radius;
    }

    double getCircumference(){
        return 2 * PI * radius;
    }

    double getArea(){
        return PI * radius * radius;
    }

    void display(){
        cout<<"The radius of the circle : "<<radius<<endl;
        cout<<"The diameter of the circle is : "<<radius * 2<<endl;
        cout<<"The circumference  is : "<<getCircumference()<<endl;
        cout<<"The area is : "<<getArea()<<endl;
    }
};

class Square{
    int length;

    public:
    Square(){
        cout<<"Enter the length : ";
        cin>>length;
    }

    int getPerimeter(){
        return length * 4;
    }

    int getArea(){
        return length * length;
    }

    void display(){
        cout<<"The length is : "<<length<<endl;
        cout<<"The perimeter is : "<<getPerimeter()<<endl;
        cout<<"The area is : "<<getArea()<<endl;
    }
};

class Triangle{
    int s1, s2, s3;
    public:
    Triangle(){
        cout<<"Enter length of side 1 : ";
        cin>>s1;
        cout<<"Enter length of side 2 : ";
        cin>>s2;
        cout<<"Enter length of side 3 : ";
        cin>>s3;
    }

    int getPerimeter(){
        return s1 + s2 + s3;
    }

    double getArea(){
        float semi = 0.5 * getPerimeter();
        return sqrt(semi * (semi - s1) * (semi - s2) * (semi - s3));
    }

    void display(){
        cout<<"The 3 sides of the Triangle : "<<s1<<" "<<s2<<" "<<s3<<endl;
        cout<<"Perimeter of the Triangle : "<<getPerimeter()<<endl;
        cout<<"Area of the Triangle : "<<getArea()<<endl;
    }
};

int main(){
    int shape = 0;

    do{
        cout<<"\tSHAPES :\n";
        cout<<"1. Rectangle"<<endl;
        cout<<"2. Circle"<<endl;
        cout<<"3. Square"<<endl;
        cout<<"4. Triangle"<<endl;
        cout<<"Enter your choice of shape [1-4] : ";
        cin>>shape;
    } while(shape < 1 || shape > 4); //repeat so long as the shape is not among those that we expect

    Sleep(2000);
    system("cls");
    cout<<"Welcome ... \n";

    switch(shape){
    case 1:{
        Rect r;
        cout<<"\n";
        r.display();
        }
        break;
    case 2:{
        Circle c;
        cout<<"\n";
        c.display();
        }
        break;
    case 3:{
        Square s;
        cout<<"\n";
        s.display();
        }
        break;
    case 4:{
        Triangle t;
        cout<<"\n";
        t.display();
        break;
        }
    }

    return 0;
}
