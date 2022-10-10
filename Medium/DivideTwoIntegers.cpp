class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==-2147483648 && divisor==-1)
        {
            return 2147483647;
        }
        if(dividend>INT32_MAX)
        {
            dividend=INT32_MAX-1;
        }
        else if(divisor>INT32_MAX)
        {
            divisor=INT32_MAX-1;
        }
        else if(dividend<=INT32_MIN)
        {
            dividend=INT32_MIN;
        }
        else if(divisor<=INT32_MIN)
        {
            divisor=INT32_MIN;
        }
        return dividend/divisor;
    }
};