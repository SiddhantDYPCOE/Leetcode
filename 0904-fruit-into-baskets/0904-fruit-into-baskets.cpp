class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0;
        int r=0;
        int maxLen=0;
        int len=0;
        unordered_map<int,int> mpp;
        while(r<fruits.size()){
            mpp[fruits[r]]++;
            if(mpp.size()<=2){
                len=r-l+1;
                maxLen=max(maxLen,len);
            }else{
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0) mpp.erase(fruits[l]);
                l++;
            }
            r++;
        }
        return maxLen;
    }
};