//https://leetcode.com/problems/count-collisions-of-monkeys-on-a-polygon/submissions/887264



class Solution {
public:
    long long MOD = 1e9+7;
    long long power(long long a,int n){
        if(n==0){
            return 1;
        }
        if(n%2==1){
            return (a*power(a,n-1))%MOD;
        }       
        long long k=power(a,n/2);
        return (k*k)%MOD;
    }
    int monkeyMove(int n) {
        return (power(2,n)-2+MOD)%MOD;
    }
};
