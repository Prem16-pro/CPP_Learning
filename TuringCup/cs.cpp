#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> W(N);
        for (int i = 0; i < N; ++i) {
            cin >> W[i];
        }

        sort(W.begin(), W.end());

        if (K >= N) {
            long long total = 0;
            for (int w : W) {
                total += w;
            }
            cout << total << endl;
            continue;
        }

        long long juniorSum = 0;
        for (int i = 0; i < K; ++i) {
            juniorSum += W[i];
        }

        long long leadSum = 0;
        for (int i = K; i < N; ++i) {
            leadSum += W[i];
        }

        long long difference1 = leadSum - juniorSum;

        juniorSum = 0;
        for (int i = 0; i < K; ++i) {
            leadSum += W[i];
        }

        leadSum = 0;
        for (int i = K; i < N; ++i) {
            juniorSum += W[i];
        }
        long long difference2 = leadSum - juniorSum;
        cout << max(difference1,difference2) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
