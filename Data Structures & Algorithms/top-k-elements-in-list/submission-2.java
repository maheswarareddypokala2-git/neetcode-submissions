class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        int[] list = new int[k];
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int num : nums){
            map.put(num,map.getOrDefault(num,0)+1);
        }
        TreeMap<Integer,List<Integer>> freq = new TreeMap<>((a,b)->b-a);
        for(Map.Entry<Integer,Integer> entry : map.entrySet()){
            freq.computeIfAbsent(entry.getValue(),l -> new ArrayList<>()).add(entry.getKey());
        }
        int count=0;
        for(Map.Entry<Integer,List<Integer>> entry : freq.entrySet()){
            List<Integer> helpFreq = entry.getValue();
            for(int c : helpFreq){
                list[count]=c;
                count++;
                if(count==k) return list;
            }
        }
        return list;
    }
}
