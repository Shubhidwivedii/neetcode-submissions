class Solution {
    /**
     * @param {number[]} prices
     * @return {number}
     */
    maxProfit(prices) {
        let minprice=prices[0];
        let maxprofit=0;
        for(let i=0;i<prices.length;i++){
            minprice=Math.min(minprice,prices[i]);
            let profit=prices[i]-minprice;
            maxprofit=Math.max(maxprofit,profit);
        }
        return maxprofit;
    }
}
