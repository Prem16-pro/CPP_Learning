
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int qs(int n, int m, vector<int>& nums) {
    unordered_map<int, int> prefixMap;
    long long prefixSum = 0;
    int maxLength = -1;

    // Initialize the map with the remainder 0 at index -1 to handle the case
    // where the sum from the beginning itself is divisible by m.
    prefixMap[0] = -1;

    for (int i = 0; i < n; ++i) {   
        prefixSum += nums[i];
        
        // Taking modulo with m and adjusting for negative remainders
        int mod = prefixSum % m;
        if (mod < 0) {
            mod += m;
        }

        // Check if this mod has been seen before
        if (prefixMap.find(mod) != prefixMap.end()) {
            // Calculate the length of the subarray
            int length = i - prefixMap[mod];
            maxLength = max(maxLength, length);
        } else {
            // Store the first occurrence of this mod
            prefixMap[mod] = i;
        }
    }

    return maxLength;
}


int main() { 
	
	int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

        int result = qs(n, m, nums);
        cout << result << endl;
    }

    return 0;
}