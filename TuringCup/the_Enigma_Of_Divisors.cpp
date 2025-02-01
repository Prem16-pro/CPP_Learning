#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> getDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
}

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> divisors = getDivisors(n);
        sort(divisors.begin(), divisors.end());
        int sum = 0;
        int count = 0;
        for (int divisor : divisors) {
            if (sum + divisor <= k) {
                sum += divisor;
                count++;
            } else {
                break;
            }
        }
        if (count == 0) {
            cout << -1 << endl;
        } else {
            cout << count << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
