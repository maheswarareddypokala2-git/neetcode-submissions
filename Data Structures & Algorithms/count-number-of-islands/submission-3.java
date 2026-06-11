class Solution {
    int[][] dire = {{1,0},{0,1},{-1,0},{0,-1}};
    public int numIslands(char[][] grid) {
        int maxArea = 0;
        int rows=grid.length,cols=grid[0].length;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                    if(grid[i][j]=='1'){
                     maxArea++;
                    int tempCount=0;
                    sinkNeighbors(grid,i,j,tempCount);
                    // maxArea = Math.max(maxArea,tempCount);
                    }
            }
        }
        return maxArea;
    }

    public void sinkNeighbors(char[][] grid, int r, int c,int tempCount){
        if(r<0||r>=grid.length||c<0||c>=grid[0].length||grid[r][c]=='0')
        return;
        // tempCount++;
        grid[r][c]='0';
        for(int[] dir : dire){
            sinkNeighbors(grid,r+dir[0],c+dir[1],tempCount);
        }
    }
}
