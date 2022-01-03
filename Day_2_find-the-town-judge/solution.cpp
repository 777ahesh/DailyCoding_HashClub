// Solution class 

class Solution {
public:
     vector<int> peopleTrust(n+1, 0);  
        for(int itr = 0; itr < trust.size(); itr++){
            peopleTrust[trust[itr][0]]--;   // People Who Trust
            peopleTrust[trust[itr][1]]++;   // People Who Don't Trust
        }     
        for(int itr = 1; itr < n+1; itr++){
            if(peopleTrust[itr] == n-1) return itr;
        }  
        return -1;
};
