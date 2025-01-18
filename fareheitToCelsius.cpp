#include <iostream>
using namespace std;

int main (){
    int f ;
    cout << "Enter Temperature in Farenheit: ";
    cin >> f ;

    float c;
    c = ((f-32)*5)/9;

    cout << "\nThe temperature in Celsius is : " << c;


    return 0;
}