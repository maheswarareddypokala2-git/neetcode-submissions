class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
                int out_lft=0,out_rgt=matrix.size()-1;
                while(out_lft<=out_rgt){
                    int out_mid=out_lft + (out_rgt-out_lft)/2;
                    int in_lft=0,in_rgt=matrix[0].size()-1;
                    while(in_lft<=in_rgt){
                        int in_mid = in_lft + (in_rgt-in_lft)/2;
                        if(matrix[out_mid][in_mid]==target) return true;
                        else if(matrix[out_mid][in_mid]>target)in_rgt=in_mid-1;
                        else in_lft=in_mid+1;
                    }
                    if(in_lft==0)out_rgt=out_mid-1;
                    else out_lft=out_mid+1;
                }
                return false;
    }
};