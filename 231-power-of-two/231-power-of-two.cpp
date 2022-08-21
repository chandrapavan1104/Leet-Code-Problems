class Solution {
public:
    bool isPowerOfTwo(long long int n) {
        cout<<n<<" ";
        if(n == 0)
            return false;
        if(n == 1)
            return true;
        if(n & 1 == 1)
            return false;
        return isPowerOfTwo(n >> 1);
    }
};