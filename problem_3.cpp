/*Write C++ program that takes the temperature in Celsius and converts it to Fahrenheit. Print
the result of the problem */

//ID:210001
//Full Name:Anvarova Sarvinoz 

//Write your code here

#include <iostream>
using namespace std;
int main () {
    float celcius{0};
    cin >> celcius;
    float fahrenheit{0};
    fahrenheit = (celcius * 9/5) + 32;
    cout << "Celcius: " << celcius << endl;
    cout << "Fahrenheit: " << fahrenheit << endl;
    return 0;
}
