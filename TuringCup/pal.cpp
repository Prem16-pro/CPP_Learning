#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;  
}

int ms(vector<string> nums){
    int n = nums.size();
    int count = -1;
    
    for(int i = 0 ; i < n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i==j) continue;
            
            string a = nums[i] + nums[j];
            if(isPalindrome(a)){
                cout << i << " "<< j << " ";
                count +=1;
            }
            
        }
    }
    
    if (count == -1){
        cout << -1 ;
    }
    
    
    return 0 ;
}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<string> nums(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }
        
        ms(nums);
        cout << endl;
    }
    
    return 0;
}
