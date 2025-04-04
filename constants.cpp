#include <iostream>
using namespace std;
#define PI = 3.142;
int main(){
    const double pi = 3.14;
    int radius;
    double Area1, Area2;

    cout << "Calculating the area of a Circle with the Radius: " << endl ;
    cin >> radius;

    Area1 = PI * radius * radius;
    Area2 = pi * radius * radius;

    cout<< "Area = " << Area1 << "When PI is 3.142" << endl;
    cout<< "Area = " << Area2 << "When PI is 3.14" << endl;

    return 0;
}