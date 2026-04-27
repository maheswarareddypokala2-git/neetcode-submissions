class TimeMap {
    private:
    unordered_map<string,unordered_map<int,string>> help_map;
public:
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        help_map[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
            //auto val = help_map[key];
                int maxi = INT_MIN;
                unordered_map<int,string>val2(help_map[key]);
                //int val2 = val.first;
                for(auto val3 : val2){
                        if(val3.first>maxi&&val3.first<=timestamp) maxi=val3.first;
                }
                if(maxi!=INT_MIN)   return help_map[key][maxi];
      return "";  
    }
};
