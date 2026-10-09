class Solution {
public:
    double findPow(double x, long long n) {
        if(n==0) return 1;

        double a=findPow(x,n/2);
        if(n%2==0) return a*a;
        else return a*a*x;
    }

    double myPow(double x, int n) {
        if(n==0) return 1;
        else if(n>0) return findPow(x,n);
        else{
            long long nn=n;
            nn *= -1;
            return 1.0 / findPow(x, nn);
        }
    }
};