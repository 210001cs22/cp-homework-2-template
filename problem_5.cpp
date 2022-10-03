/*Write C++ program that takes two numbers(int) from the user and checks whether the first
one is greater or equal to the second. If the first is greater, it should print 1; if it is smaller, it
should print 0*/

//ID:210001
//Full Name:Anvarova Sarvinoz 

//Write your code here

#include <iostream>
using namespace std;
int main () {
    int a{0};
    int b{0};
    cin >> a;
    cin >> b;
    if(a >= b) {
        cout << 1 << endl;}
    else {
            cout << 0 << endl;
    }
    return 0;
}
