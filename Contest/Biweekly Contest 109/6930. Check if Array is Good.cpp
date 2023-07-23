class Solution {
public:
    bool isGood(vector<int>& nums) {
        int size=nums.size();
        int max=0;int count=0;
        for(int i=0;i<size;i++)
        {
            if(max<nums[i])
                max=nums[i];
        }
        for(int i=0;i<size;i++)
        {
            if(max==nums[i])
                count++;
        }
        if(size==max+1&&count==2)
            return true;
        else
            return false;
        
    }
};