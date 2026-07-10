class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mpp;
        for(int i=0;i<n;i++){
            int num = nums[i];
            if(mpp.find(num) != mpp.end()) return true;
            mpp[num] = i;
        }
        return false;
    }
};