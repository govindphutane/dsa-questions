class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxfreq=0;
        int n = nums.size();
        int currcount=0;

        for (int i = 0; i<n;i++){
            if(nums[i]!=1){
                if(maxfreq<currcount){
                    maxfreq=currcount;
                }
                currcount=0;
            }
            else currcount++;
        }
        if(maxfreq<currcount)maxfreq= currcount;
        return maxfreq;
    }
};