class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> result;
        for(int i=0; i<nums.size(); i++){
            int comp = target - nums[i];
            if(result.find(comp)!=result.end()){
                return {result[comp], i};
            }
            result[nums[i]] = i;
        }
        return {};
    }
};
