class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        
        vector <string> aryan;
        string word;
        string ans="";
        for(int i=0;i<words.size();i++)
        {
            word=words[i]+separator;
            for(int j=0;j<word.size();j++)
            {
                if(word[j]==separator)
                {
                    if(ans!="")
                        aryan.push_back(ans);
                    ans="";
                }
                else{
                    ans=ans+word[j];
                }
            }
            
        }
        return aryan;
        
    }
};