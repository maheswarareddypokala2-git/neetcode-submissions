class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> arr1;
        //int count=0;
        for(int index=0;index<s.size();index++){
            arr1[s[index]]++;
            arr1[t[index]]--;
            if(arr1[t[index]]==0){
                arr1.erase(t[index]);
            }
            if(arr1[s[index]]==0){
                arr1.erase(s[index]);
            }
           // count += (arr1[s[index]]+arr1[t[index]]);
        };
        if(arr1.empty()) return true;
        return false;
    }
};
