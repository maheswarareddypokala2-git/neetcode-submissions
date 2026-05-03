class Solution {
    public int lengthOfLongestSubstring(String s) {
        int ans=0,lft=0,rgt=0;
        HashMap<Character,Integer> map = new HashMap<>();
        while(lft<=rgt&&rgt<s.length()){
            if(map.containsKey(s.charAt(rgt))){
                ans=Math.max(ans,rgt-lft);
                lft=map.get(s.charAt(rgt)) + 1;
                map.clear();
               // for(int i = lft; i < lft; i++) {}
                rgt=lft;
            }
            else {
                map.put(s.charAt(rgt),rgt);
                rgt++;
            }
        }
        ans = Math.max(ans,rgt-lft); // to handle case with all distinct
        return ans;
    }
}
