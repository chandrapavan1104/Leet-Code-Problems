class Solution {
public:
    int fib(int n) {
        return round((pow(1.618033988749895, n) - pow(-0.6180339887498949, n)) / 2.23606797749979);
    }
};