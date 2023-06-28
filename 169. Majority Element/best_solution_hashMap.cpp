class Solution 
{
public:
    int majorityElement(vector<int>& nums)
    {
        unordered_map<int, int> numMap;
        int size = nums.size();

        for(int i = 0; i < size; i++)
            numMap[nums[i]] += 1;
        
        size/= 2;

        for(auto x : numMap)
        {
            if(x.second > size)
                return x.first;
        }
        return 0;
    }
};