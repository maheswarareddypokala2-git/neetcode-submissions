class Solution {
    public int[][] merge(int[][] intervals) {
        TreeMap<Integer,Integer> map = new TreeMap<>();
        Arrays.sort(intervals,(a,b) -> { 
            if(a[0]==b[0]) return Integer.compare(a[1],b[1]);
            else 
            return Integer.compare(a[0],b[0]);
        } );
        //checking in order is important to reduce comparisons in for loop
        for(int[] interval : intervals){
            if(map.containsKey(interval[0])||map.isEmpty()){
            //map.put(intervals[0],Math.max(interval[1],map.get(interval[0])));
            map.put(interval[0],interval[1]);
            }
            else{
                int key = map.floorKey(interval[0]);
                if(interval[1]<=map.get(key)) continue;
                else if(interval[0]>map.get(key))
                map.put(interval[0],interval[1]);
                else map.put(key,interval[1]);
            }
        }
        ArrayList<int[]> list = new ArrayList<>();
        for(Map.Entry<Integer,Integer> entry : map.entrySet()){
            list.add(new int[]{entry.getKey(), entry.getValue()});
        }
        return list.toArray(new int[list.size()][]);
    }
}
