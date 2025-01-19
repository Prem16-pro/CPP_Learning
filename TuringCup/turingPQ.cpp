#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Helper function to compute the maximum points in a linear array (non-circular)
int linearMaxPoints(const vector<int>& nums) {
    int n = nums.size();
    
    if (n == 0) return 0;
    if (n == 1) return max(0, nums[0]);
    
    vector<int> dp(n);
    dp[0] = max(0, nums[0]);
    dp[1] = max(dp[0], nums[1]);
    
    for (int i = 2; i < n; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    }
    
    return dp[n - 1];
}

int maxPoints(const vector<int>& nums) {
    int n = nums.size();
    
    // Case 1: Exclude the first element (i.e., solve for nums[1:])
    int case1 = linearMaxPoints(vector<int>(nums.begin() + 1, nums.end()));
    
    // Case 2: Exclude the last element (i.e., solve for nums[:-1])
    int case2 = linearMaxPoints(vector<int>(nums.begin(), nums.end() - 1));
    
    // Return the maximum of the two cases
    return max(case1, case2);
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n;
        cin >> n;  // Size of the array
        vector<int> nums(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];  // The array of points
        }
        
        cout << maxPoints(nums) << endl;
    }
    
    return 0;
}
