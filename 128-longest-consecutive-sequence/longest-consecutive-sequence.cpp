class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int maxi=1;
        for(auto el:st){
            if(st.find(el-1)==st.end()){
                int count=1;
                int x=el;
                while(st.find(x+1)!=st.end()){
                    count++;
                    x++;
                }
                maxi = max(maxi,count);
            }
        }
        return maxi;
    }
};