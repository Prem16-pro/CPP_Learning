#include <iostream>
using namespace std;

int main (){

    int n;
    cout << "Enter a number to check if prime : ";
    cin >> n;

    for (int i = 2; i<=n ; i++){
        if(i==n && n==2){
            cout << "\n" << n << " is Prime.";
            continue;
        }
        else if(n%i == 0){
            cout << "\n"<<n<<" is Not Prime";
            break;
        }
        else{
            if (i == n-1 && n%i != 0){
                cout << "\n" << n << " is Prime.";
                break;
            }
            continue;
        }
    }

    return 0;
}