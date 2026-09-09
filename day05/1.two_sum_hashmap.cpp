
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>  hash1;

        for(int i=0;i<nums.size();i++)
        {   if(hash1.count(nums[i]))
            {
                return{hash1[nums[i]],i};
            }
            hash1[target-nums[i]]=i;
        }

        


        

        return {};
    }
};
