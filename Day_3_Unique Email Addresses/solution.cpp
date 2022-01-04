class Solution {
public: 
    string validation(string &s)
    {
        int i=0;
        string temp="";
        while(i<s.length() && s[i]!='@' && s[i]!='+')
        {
            if(s[i]!='.')
            {
                temp.push_back(s[i]);
            }
            i++;
        }
        while(i<s.length() && s[i]!='@')
        {
            i++;
        }
        return temp+"@"+s.substr(i+1);
    }
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>email;
        for(int i=0;i<emails.size();i++)
        {
            string temp=validation(emails[i]);
            email.insert(temp);
        }
        return email.size();
    }
};