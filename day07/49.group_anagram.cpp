class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hash1;
        vector<vector<string>> result;
        for(string s:strs)
        {
            
       
            int count[26]={0};
            for(char c:s)
            {
                count[c-'a']++;
            }
            string key = "";
            for (int i = 0; i < 26; ++i) {

                key += char(count[i]); 
            }
            hash1[key].push_back(s);
        } 
        for(auto pair:hash1)
        {
            result.push_back(pair.second);
        }
        return result;

    }
};


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,int> hash1;
        int index=0;
        for (int i=0;i<strs.size();i++)
        {
            string s=strs[i];
            sort(s.begin(), s.end());
            
            cout<<s;
            if(hash1.count(s))
            {
                result[hash1[s]].push_back(strs[i]);
            }
            else
            {
                hash1[s]=index;
                result.push_back({});
                result[hash1[s]].push_back(strs[i]);
                index++;
            }
        }
        return result;
    }
};
