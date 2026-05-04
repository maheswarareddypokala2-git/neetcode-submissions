class Solution {
    public int longestConsecutive(int[] nums) {
        HashMap<Integer,Integer> seqCountMap = new HashMap<>();
        int res = 0;
        for(int num : nums){
            if(!seqCountMap.containsKey(num)){
                seqCountMap.put(num,seqCountMap.getOrDefault(num-1,0)+seqCountMap.getOrDefault(num+1,0)+1);
                seqCountMap.put(num-seqCountMap.getOrDefault(num-1,0),seqCountMap.get(num));
                seqCountMap.put(num+seqCountMap.getOrDefault(num+1,0),seqCountMap.get(num));
                res = Math.max(res,seqCountMap.get(num));
            }
        }
        return res;
    }
}
