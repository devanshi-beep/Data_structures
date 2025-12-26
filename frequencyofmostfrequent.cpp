class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        long long total = 0;  // sum of current window
        int l = 0;
        int ans = 1;
        
        for (int r = 0; r < nums.size(); r++) {
            total += nums[r];
            
            // While cost exceeds k, shrink window
            while ((long long)nums[r] * (r - l + 1) - total > k) {
                total -= nums[l];
                l++;
            }
            
            ans = max(ans, r - l + 1);
        }
        
        return ans;
    }
};