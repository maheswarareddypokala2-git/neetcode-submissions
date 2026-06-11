class Solution {
    int[][] dire = {{1,0},{0,1},{-1,0},{0,-1}};
    int area=0;
    public int maxAreaOfIsland(int[][] grid) {
        int maxArea = 0;
        int rows=grid.length,cols=grid[0].length;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                    if(grid[i][j]==1){
                     area =0;
                    sinkNeighbors(grid,i,j);
                    maxArea = Math.max(maxArea,area);
                    }
            }
        }
        return maxArea;
    }

    public void sinkNeighbors(int[][] grid, int r, int c){
        if(r<0||r>=grid.length||c<0||c>=grid[0].length||grid[r][c]==0)
        return ;
        area++;
        grid[r][c]=0;
        for(int[] dir : dire){
            sinkNeighbors(grid,r+dir[0],c+dir[1]);
        }
        // return tempCount;
    }
}
