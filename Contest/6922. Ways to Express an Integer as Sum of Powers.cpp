class Solution {
public:
    int MOD=(int)(1e9+7);
    int dp(int ind,int num,int x,vector<vector<int>>&vec){
        if(ind<0)
            return 0;
        if(ind==0)
            return 1;
        if(pow(num,x)>ind)
            return 0;
        if(vec[ind][num]!=-1) 
            return vec[ind][num];
        int power=pow(num,x);
        int notTake=dp(ind-power,num+1,x,vec);
        int take=dp(ind,num+1,x,vec);
        return vec[ind][num]=(notTake%MOD+take%MOD)%MOD;
    }
    int numberOfWays(int n, int x) {
        vector<vector<int>>vec(n+1,vector<int>(n+1,-1));
        return dp(n,1,x,vec);
    }
};