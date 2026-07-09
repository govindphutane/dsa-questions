class Solution {
public:
    void swap(int &a , int &b){
        int temp = a ;
        a=b;
        b= temp;
    }
    void moveZeroes(vector<int>& nums) {
        int start = 0 ;
        int end = nums.size()-1;
        int i =  0;
        while (i<nums.size()){
            if(nums[i]!=0)swap(nums[i++],nums[start++]);
            else i++;
        }
    }
};