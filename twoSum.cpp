class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = size(nums);
        vector<int> out;
        unordered_map<int, int> index;

        for(int i=0; i<n; i++){
            int req=(target - nums[i]);
            if(index.find(req) != index.end()){
                out.push_back(index[req]);
                out.push_back(i);
            }
            index[nums[i]] = i; 
        }
        return out;
    }
};