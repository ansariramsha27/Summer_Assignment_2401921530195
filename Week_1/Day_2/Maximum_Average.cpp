class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double wsum=0;
        double maxsum=0;
        if(nums.size()<k)
        {
            return -1;
        }
        for(int i=0;i<k;i++)
        {
            maxsum+=nums[i];
        }
        wsum=maxsum;
        for(int i=k;i<nums.size();i++)
        {
            wsum=wsum+nums[i]-nums[i-k];
            maxsum=max(maxsum,wsum);
        }
        return maxsum/k;
    }
};
