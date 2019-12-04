#include<iostream>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n < 0)
        {
            return power(x,-n);
        }
        else
        {
            return power(x,n);
        }
        
    }
private:
    double power(double x, int n)
    {
        if (n == 0)
        {
            return 1;
        }
        else
        {
            double half = power(x, n/2);
            if( n % 2 == 0) 
            {
                return half *half;
            }
            else
            {
               return x*half*half;
            }
        }
        
    }
};
int main(int argc, char const *argv[])
{
    cout<<Solution().myPow(2.0,-2)<<endl;
    cout<<Solution().myPow(-2.0,-2)<<endl;
    cout<<Solution().myPow(34.000515,-3)<<endl;
    cout<<Solution().myPow(1.0,-2147483648)<<endl;

    return 0;
}
