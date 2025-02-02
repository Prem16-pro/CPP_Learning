#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a=4,b=6;
    cout << "a&b : " << (a&b) << endl;
    cout << "a|b : " << (a|b) << endl;
    cout << "~a : " << ~a << endl;
    cout << "a^b : " << (a^b) << endl;

    cout << (17>>1) << endl;
    cout << (17>>2) << endl;

    cout << (19<<1) << endl;
    cout << (21<<2) << endl;


    int i = 4;
    int z = i++;
    cout << z+i << endl;

    i=4;
    z=++i;
    cout << z+i << endl;
    return 0;
}