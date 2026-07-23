class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int maxprofit=0;
        for(int num:prices){
            minprice=min(num,minprice);
            int profit=num-minprice;
            maxprofit=max(profit,maxprofit);
        }
        return maxprofit;
        
    }
};
