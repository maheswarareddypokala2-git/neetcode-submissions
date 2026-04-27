class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string,vector<string>>help_map;
      for(auto str : strs){
        multiset<char>temp_vect;
        for(auto s : str){
            temp_vect.insert(s);
        }
        string ord_str ="";
        for( char elem : temp_vect){
        ord_str+=elem;
        }
        help_map[ord_str].push_back(str);
      }
     vector<vector<string>>ans;
     for ( auto ans_index : help_map){
        ans.push_back(ans_index.second);
     } 
     return ans; 
    }
};
