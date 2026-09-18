class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> hash1;
        unordered_map<int,vector<int>> hash2;
        int high=0;
        for(int n:nums)
        {
            hash1[n]++;
        }
        for(auto it:hash1)
        
        {   
            if(it.second>high)
            {
                high=it.second;
            }
            hash2[it.second].push_back(it.first);
        }
        while(k!=0)
        {
            if(hash2.count(high))
            {   
                for(int i:hash2[high])
                {
                    result.push_back(i);
                    k--;
                    if(k==0)
                    {
                        return result;
                    }
                    
                }
            }
            high--;
        }
        return result;

        

    }
};
