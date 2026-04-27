class Solution {
public:

    string encode(vector<string>& strs) {
        string encode_str="";
        for (auto str : strs){
            if(encode_str!="")
             encode_str+="<";
             if(str=="")encode_str+="this1isempty";
             else
             encode_str+=str; 
        }
        return encode_str;
    }

    vector<string> decode(string s) {
            stringstream ss(s);
            vector<string>words;
            string word;
            while(getline(ss, word,'<')){
                if(word=="this1isempty")
                words.push_back("");
                else 
                words.push_back(word); 
            }
            return words;
    }
};
