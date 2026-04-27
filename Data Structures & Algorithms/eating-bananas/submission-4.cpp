class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // if(piles.size()==1) {
        //         if(piles[0]%h==0)return piles[0]/h;
        //         else return piles[0]/h +1;
        //     } 
                long sum=0;
                int maxi=INT_MIN;
                for(int i=0;i<piles.size();i++){
                        sum+=piles[i];
                        maxi=max(maxi,piles[i]);
                }
                int ext_var=sum/h;
                int ans=maxi;
                if(sum<=h) return 1;
                while(ext_var<=maxi){
                    int ext_h=0,mid=ext_var+(maxi-ext_var)/2;
                    for(int i=0;i<piles.size();i++){
                    if(piles[i]%mid==0)
                            ext_h+=piles[i]/mid;
                            else ext_h+=piles[i]/mid+1;
                    }
                    //if(ext_h==h) return mid;
                    if(ext_h>h) ext_var=mid+1;
                    else {
                        ans=mid;
                        maxi=mid-1;
                    }
                }
            return ans;
    }
};
