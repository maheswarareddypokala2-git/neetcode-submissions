class Solution {

    public String encode(List<String> strs) {
        StringBuilder encodeStr = new StringBuilder();
        for (String str : strs) {
            encodeStr.append(str.length()).append('#').append(str);
            }
        return encodeStr.toString();
    }

    public List<String> decode(String s) {
        List<String> words = new ArrayList<>();
        // Handle the case where the input string might be empty
        if (s == "" || s.isEmpty()) {
            return words;
        }
        // Split by the delimiter. The -1 limit ensures trailing empty strings are kept.
        // String[] parts = s.split("#", -1);
        int i=0;
        while(i<s.length()){
        int j=i;
        while(s.charAt(j)!='#')j++;
        int len = Integer.parseInt(s.substring(i,j));
        j++;
        String tempStr = s.substring(j,j+len);
        i=j+len;
        words.add(tempStr);
        }
        return words;
    }
}