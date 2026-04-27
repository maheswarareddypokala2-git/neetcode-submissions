class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> finalArray = new ArrayList<>();
        HashMap<String,List<String>> helpMap = new HashMap<>();
        for(String str : strs){
            int[] freq = new int[26];
            for(char c : str.toCharArray()){
                freq[c-'a']++;
            }
            String freqKey = Arrays.toString(freq);
            helpMap.computeIfAbsent(freqKey, k->new ArrayList<>()).add(str);
        }
        helpMap.values().forEach(finalArray::add);
        return finalArray;
    }
}
