class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++)st.insert(nums[i]);
        int maxi=0;
        for(auto it:nums){
            if(!st.count(it-1)){
                int curr=it;
                int len=1;
                while(st.find(curr+1)!=st.end()){
                    curr++;
                    len++;
                }
                maxi=max(maxi,len);
            }
        }
        return maxi;
    }
};
