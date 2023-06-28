class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_map<int, int> numMap;
        for(auto i : nums)
            numMap[i]+=1;
        for(auto i : numMap)
        {
            if(i.second >= 2)
                return 1;
        }
        return 0;
    }
};