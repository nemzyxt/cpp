// Author : Nemuel Wainaina

/*
    Program takes 2 points on the cartesian plane as input from the user 
    and calculates the distance between them
*/

#include <iostream>
#include <cmath>

using namespace std;

// Declaring the Point class
class Point {
    private:
    int x, y;

    public:
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
    friend double distCalculator(Point A, Point B);
};

/*
    function takes 2 points as arguments and performs the calculation 
    on them to determine the distance between them
*/
double distCalculator(Point A, Point B) {
    int x1, x2, y1, y2, xd, yd;
    x1 = A.x;
    x2 = B.x;
    y1 = A.y;
    y2 = B.y;
    xd = x1 - x2;
    yd = y1 - y2;

    double dist = sqrt(((xd)*(xd)) + ((yd)*(yd)));
    return dist;
}

// the main function
int main() {
    cout<<"Welcome to the Program ..."<<endl;

    int x, y;

    cout<<"\n";

    cout<<"Point A ::\n";
    cout<<"[*] Enter the x coordinate : ";
    cin>>x;
    cout<<"[*] Enter the y coordinate : ";
    cin>>y;
    Point A(x, y);

    cout<<"\n";

    cout<<"Point B ::\n";
    cout<<"[*] Enter the x coordinate : ";
    cin>>x;
    cout<<"[*] Enter the y coordinate : ";
    cin>>y;
    Point B(x, y);

    double dist = distCalculator(A, B);

    cout<<"\n";

    cout<<"[+] The distance between the 2 points is : "<<dist<<" units\n\n";
}
