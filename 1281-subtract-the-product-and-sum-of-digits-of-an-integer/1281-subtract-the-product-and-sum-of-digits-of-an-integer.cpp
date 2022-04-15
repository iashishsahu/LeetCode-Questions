class Solution {
public:
    int subtractProductAndSum(int n) {
        int pr = 1, sum = 0, k;
        while (n>0) {
            k = n % 10;
            pr *= k;
            sum += k;
            n /= 10;
        }
        return pr - sum;
    }
};