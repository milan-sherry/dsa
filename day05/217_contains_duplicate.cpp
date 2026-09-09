class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> num;
        for (int i: nums)
        {
            num[i]++;
            if(num[i]>1)
            return true;

        }
        return false;

        
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int i : nums)
        {
            if (seen.count(i))
                return true;

            seen.insert(i);
        }

        return false;
    }
};
