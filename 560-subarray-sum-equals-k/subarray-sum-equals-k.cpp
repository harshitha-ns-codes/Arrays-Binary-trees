class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int> mpp;
        int n = nums.size();
        mpp[0] = 1;
        int preSum = 0 , cnt = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            preSum = preSum + nums[i];
            int remove = preSum - k;
            cnt = cnt + mpp[remove];
            mpp[preSum] += 1;  
        }
        return cnt;
        
        
    }
};