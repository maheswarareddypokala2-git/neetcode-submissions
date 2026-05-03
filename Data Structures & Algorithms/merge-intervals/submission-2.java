class Solution {
    public int[][] merge(int[][] intervals) {
        //TreeMap<Integer,Integer> map = new TreeMap<>();
        List<int[]> list = new ArrayList<>();
        pairSort(intervals);
        list.add(new int[]{intervals[0][0],intervals[0][1]});
        //checking in order is important to reduce comparisons in for loop
        for(int i=1;i<intervals.length; i++){
            if( intervals[i][0]<=list.get(list.size()-1)[1] ){
                list.get(list.size()-1)[1]= 
                Math.max(list.get(list.size()-1)[1],intervals[i][1]);
            }
            else {
                list.add(new int[]{intervals[i][0],intervals[i][1]});
            }
        }
        return list.toArray(new int[list.size()][]);
    }

 void pairSort(int[][] intervals){
    Arrays.sort(intervals,(a,b) -> { 
            if(a[0]==b[0]) return Integer.compare(a[1],b[1]);
            else 
            return Integer.compare(a[0],b[0]);
        } );
    }
}

