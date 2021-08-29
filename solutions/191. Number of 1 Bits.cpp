class Solution {
public:
    int hammingWeight(unsigned int A) {
    int c = 0;
    while(A!=0) //Brian Kernighan’s Algorithm: iterates only over set bits
    {
        A &= A-1;
        ++c;
    }
    return c;
}};
