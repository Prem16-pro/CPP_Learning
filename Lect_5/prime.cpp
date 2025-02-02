#include <iostream>

using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cout << "Enter a no. to check if prime : ";
//     cin >> n;
//     cout << endl;

//     for (int i = 2; i < n; i++)
//     {
//         if(n%i==0){
//             cout << "Not Prime as divisible by : "<< i;
//             return 0;
//         }else{
//             continue;
//         }
//     }
//     cout << n << " is prime!";
//     return 0;
// } MY METHOD

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            isPrime=0;
            break;
        }
    }

    if (!isPrime)
    {       
        cout <<n<< " is not Prime";
    }else
    {
        cout <<n<< " is Prime";
    }
    return 0;
}

