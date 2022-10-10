class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>luck;
        map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto val:m)
        {
            if(val.first==val.second)
            {
                luck.push_back(val.first);
            }
        }
        if(luck.size()==0)
        {
            return -1;
        }
        return luck[luck.size()-1];
    }
};