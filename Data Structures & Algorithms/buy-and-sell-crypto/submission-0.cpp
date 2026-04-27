class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int lft=0,rgt=1;
       int profit=0;
       while(rgt>lft && rgt<prices.size()){
        //if(lft==rgt)rgt++;
            if(prices[rgt]<prices[lft]){
                lft=rgt;
                rgt=lft+1;
            }
            else {
                profit=max(profit,prices[rgt]-prices[lft]);
                int temp=rgt+1;
                // increase right till you find one greater than cur right or less than cur lft
                while(temp<prices.size()&&prices[temp]>=prices[lft]&&prices[temp]<=prices[rgt])temp++;
                if(temp<prices.size())rgt=temp;
                else return profit;
            }
       } 
       return profit;
    }
};