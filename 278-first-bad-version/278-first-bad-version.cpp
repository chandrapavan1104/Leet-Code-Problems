// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int first = 1;
        int last = n;
        int curr;
        while (first <= last) {                
            if (isBadVersion(first)) return first;
            curr = first + (last-first) / 2;
            if (isBadVersion(curr)) {
                last = curr;
            } else {
                first = curr+1;
            }
        }
        return first;
    }
};