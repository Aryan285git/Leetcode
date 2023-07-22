class Solution {
public:
    string sortVowels(string s) {
        vector <char> ch;
        for(int i=0;i<s.size();i++)
        {
            char c=s[i];
            if(c =='a' || c =='e' ||c == 'i' ||c == 'o' ||c == 'u'||c =='A' || c =='E' ||c == 'I' ||c == 'O' ||c == 'U')
                ch.push_back(c);
        }
        sort(ch.begin(),ch.end());
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            char c =s[i];
            if(c =='a' || c =='e' ||c == 'i' ||c == 'o' ||c == 'u'||c =='A' || c =='E' ||c == 'I' ||c == 'O' ||c == 'U')
                s[i]=ch[k++];
        }
        return s;
    }
};