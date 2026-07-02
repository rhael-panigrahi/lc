class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int writeptr = 0;
        for(int i=0;i<nums.size();i++){
            if(writeptr>=2){
                if(nums[i]!=nums[writeptr-2]){
                    nums[writeptr] = nums[i];
                    writeptr++;
                }
            }
            else {nums[writeptr] = nums[i];writeptr++;}
        }
        return writeptr;
    }
};