class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int low = 0;int high = n-1,write = n-1;
        while(low<=high){
            if(abs(nums[low])>abs(nums[high])){
                ans[write] = nums[low]*nums[low];
                low++;
            }else{
                ans[write] = nums[high]*nums[high];
                high--;
            }
            write--;
        }
        return ans;
    }
};