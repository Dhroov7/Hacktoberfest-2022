class Solution {
public:
    double util(vector<int> &a, vector<int> &b) {
        int n1 = a.size();
        int n2 = b.size();
        int len = (n1+n2+1)/2;
        int l = 0, h = n1, x, y, xx, yy;
        if(n1==0 && n2==0)
            return 0;
        if(n1==0) {
            if(n2%2) {
                return b[n2/2];
            }
            return (b[n2/2]+b[(n2-1)/2])/2.0;
        }
        while(l<=h) {
            int mid = (h-l)/2+l;
            int rem = len-mid;
            if(mid>0 && a[mid-1]>b[rem]) {
                h = mid-1;
            } else if(mid<n1 && b[rem-1]>a[mid]) {
                l = mid+1;
            } else {
                int ml = 0, mr = 0;
                if(mid==0)
                    ml = b[rem-1];
                else if(rem ==0)
                    ml = a[mid-1];
                else
                    ml = max(a[mid-1], b[rem-1]);
                if((n1+n2)%2) return ml;
                
                if(mid==n1)
                    mr = b[rem];
                else if(rem==n2)
                    mr = a[mid];
                else 
                    mr = min(a[mid], b[rem]);
                return (ml+mr)/2.0;
            }
        }
        return 0;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if(n1<n2) {
            return util(nums1, nums2);
        } 
        return util(nums2, nums1);
    }
};
