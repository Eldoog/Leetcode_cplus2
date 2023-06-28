class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set<int> Myset;
        for(auto i : nums)
        {
            if(Myset.count(i))
                return 1;
            else
                Myset.insert(i);
        }
        return 0;
    }
};