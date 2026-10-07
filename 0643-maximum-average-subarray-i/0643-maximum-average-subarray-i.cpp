class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int currsum = 0;
        int n = nums.size();
        for(int i=0;i<k;i++){
           currsum += nums[i];
            
        }
        int maxsum = currsum;
        for(int i=k;i<n;i++){
            currsum = currsum - nums[i-k] + nums[i];
            maxsum = max(maxsum, currsum);
        }
        return (double)maxsum /k;
       
    }
};

