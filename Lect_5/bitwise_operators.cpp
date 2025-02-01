#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;
    cin >> a >> b ;
    cout << "a&b : " << (a&b) << endl;
    cout << "a|b : " << (a|b) << endl;
    cout << "~a : " << ~a << endl;
    cout << "a^b : " << (a^b) << endl;
    return 0;
}