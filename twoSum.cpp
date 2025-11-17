class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out;
        int num;
        int n= nums.size();
        for(int i=0; i<n; i++){
            num= nums[i];
            for(int j=i+1; j<n; j++){
                if(num+nums[j]== target){
                    out.push_back(j);
                    out.push_back(i);
                }
            }
        }
        return out;
    }
};
