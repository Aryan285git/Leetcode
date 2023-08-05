class Solution {
public:
    int accountBalanceAfterPurchase(int r) {
        int o=(r+5)/10;
        return abs(100-o*10);        
    }
};