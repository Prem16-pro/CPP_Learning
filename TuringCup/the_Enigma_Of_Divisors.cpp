#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int max_divisors_sum(int n, int k) {
    vector<int> divisors;
    
    for (int i = 1; i <= (n); ++i) {
        if (n % i == 0) {
            divisors.push_back(i);        
        }
    }
    int current_sum = 0;
    int count = 0;
    
    for (int d : divisors) {
        if (current_sum + d <= k) {
            current_sum += d;
            count++;
        } else {
            continue; 
        }
    }
    return count;
}

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        int n, k;
        cin >> n >> k;
        
        cout << max_divisors_sum(n, k) << endl;
    }
    
    return 0;
}
