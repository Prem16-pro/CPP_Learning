#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int findLongestBalancedSubarray(const vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> balanceMap;
    int balance = 0;
    int maxLength = 0;

    balanceMap[0] = -1;

    for (int i = 0; i < n; ++i) {
        balance += (nums[i] == 1) ? 1 : -1;

        if (balanceMap.find(balance) != balanceMap.end()) {
            int length = i - balanceMap[balance];
            maxLength = max(maxLength, length);
        } else {
            balanceMap[balance] = i;
        }
    }

    return maxLength;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);

        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

        cout << findLongestBalancedSubarray(nums) << endl;
    }

    return 0;
}
