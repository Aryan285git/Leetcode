class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        vector<long long>aryan(nums.begin(),nums.end());
        for(int i=aryan.size()-1;i>0;i--)
        {
            if(aryan[i]>=aryan[i-1])
                aryan[i-1]=aryan[i]+aryan[i-1];
        }
        sort(aryan.begin(),aryan.end());
        return aryan[aryan.size()-1];
    }
};