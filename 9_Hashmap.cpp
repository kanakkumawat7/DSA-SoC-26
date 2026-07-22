/*
    GROUP ANAGRAMS
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {



        unordered_map<string, vector<string>> ans;
this is defining an unordered map


        for(string& s : strs){
            string key =s;
            sort(key.begin(), key.end());




            ans[key].push_back(s);
pushes the original word s directly into that key's bucket array
        
        
        
            }

        vector<vector<string>> result;
        for(auto& entry : ans){
            result.push_back(entry.second);
        }
        return result;
    }
};
*/