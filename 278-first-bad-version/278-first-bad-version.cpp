// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(!isBadVersion(n))
            return n+1;
        return firstBadVersion(n-1);
        }
};