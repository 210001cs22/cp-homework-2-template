/* Write C++ program that takes the radius(float) of the circle from user and calculates diameter,
circumference and area of it. Print the result of the problem. */

//ID:210001
//Full Name:Anvarova Sarvinoz

//Write your code here

#include <iostream>
using namespace std;
int main () {
    float radius{0};
    cin >> radius;
    float diameter{0};
    diameter = 2 * radius;
    float circumference{0};
    circumference = 3.14 * diameter;
    float area {0};
    area = 3.14 * radius * radius;
    cout << "The radius is: " << radius << endl;
    cout << "The diameter is: " << diameter << endl;
    cout << "The circumference is: " << circumference << endl;
    cout << "The area is: " << area << endl;
    return 0;
}

