class Solution {
public:
    int solve(vector<int> &nums, int indx,int current_xor_total)
    {
        if(indx==nums.size())
        {
            return current_xor_total;
        }
        return solve(nums,indx+1,current_xor_total^nums[indx])+solve(nums,indx+1,current_xor_total);
    }
    int subsetXORSum(vector<int>& nums) {
        return solve(nums,0,0);
    }
};