#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter how many fib nums you want : ";
    cin >> n;
    int a=0,b=1;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        int temp = a+b;
        a=b;
        b=temp;
    }
    
    return 0;
}
