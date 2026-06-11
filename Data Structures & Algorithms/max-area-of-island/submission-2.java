class Solution {
    // int[][] dire = {{1,0},{0,1},{-1,0},{0,-1}};
    public int maxAreaOfIsland(int[][] grid) {
        int maxArea = 0;
        int rows=grid.length,cols=grid[0].length;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                    if(grid[i][j]==1){
                    maxArea = Math.max(maxArea,sinkNeighbors(grid,i,j));
                    }
            }
        }
        return maxArea;
    }

    public int sinkNeighbors(int[][] grid, int r, int c){
        if(r<0||r>=grid.length||c<0||c>=grid[0].length||grid[r][c]==0)
        return 0;
        grid[r][c]=0;
        return    1+ sinkNeighbors(grid,r+1,c)+sinkNeighbors(grid,r,c+1)
                    +sinkNeighbors(grid,r-1,c)+sinkNeighbors(grid,r,c-1);
    }
}
