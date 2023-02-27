class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        int n = nums.size();
        
        if(n == 1 || k == 0)
            return  false;

        unordered_map<int, int> mp;

        for(int i=0; i<n; i++){
            if(mp.find(nums[i]) != mp.end()){
                if(i-mp[nums[i]] <= k)
                    return true;
            }
            mp[nums[i]] = i;
        }

        return false;
        
    }
};
