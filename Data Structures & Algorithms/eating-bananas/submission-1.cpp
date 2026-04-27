class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        if(piles.size()==1) {
                if(piles[0]%h==0)return piles[0]/h;
                else return piles[0]/h +1;
            } 
            sort(piles.begin(),piles.end());
            if(h==piles.size())return piles[piles.size()-1];
            int lft=0,rgt=piles.size()-1;
            while(lft<=rgt){
                int mid=lft+(rgt-lft)/2;
                int temp_h=mid+1;
                for(int i=mid+1;i<piles.size();i++){
                        if(piles[i]%piles[mid]==0)
                            temp_h+=piles[i]/piles[mid];
                            else temp_h+=piles[i]/piles[mid]+1;
                }
            if(temp_h==h) return piles[mid];
            else if(temp_h>h)lft=mid+1;
            else rgt=mid-1;
            }
                long sum=0;
                for(int i=0;i<piles.size();i++){
                        sum+=piles[i];
                }
                long ext_var=sum/h;
                while(ext_var<=piles[piles.size()-1]){
                    long ext_h=0;
                    for(int i=0;i<piles.size();i++){
                    if(piles[i]%ext_var==0)
                            ext_h+=piles[i]/ext_var;
                            else ext_h+=piles[i]/ext_var+1;
                    }
                    if(ext_h<=h) return (int)ext_var;
                    ext_var++;
                }
            return 0;
    }
};
