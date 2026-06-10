class Solution {
    public int numIslands(char[][] grid) {
        int islCnt=0;
        boolean[][] vis = new boolean[grid.length][grid[0].length];
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                if(!vis[i][j]&&grid[i][j]=='1'){
                    islCnt++;
                    sinkNeighbors(i,j,grid,vis);
                }
            }
        }
        return islCnt;
    }
    void sinkNeighbors(int r,int c,char[][] grid,boolean[][] vis){
        if(r<0||r>=grid.length||c<0||c>=grid[0].length||grid[r][c]=='0'||vis[r][c])
        return;
        vis[r][c]=true;
        sinkNeighbors(r-1,c,grid,vis);
        sinkNeighbors(r,c-1,grid,vis);
        sinkNeighbors(r+1,c,grid,vis);
        sinkNeighbors(r,c+1,grid,vis);
    }

}
