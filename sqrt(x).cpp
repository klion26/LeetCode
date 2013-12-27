class Solution {
public:
    int sqrt(int x) {
        //be careful!!!
        //use unsigend int to store ret, not int
        //you will get TLE if you use int
        //because ret*ret may be out range of int
        unsigned int ret;
        for(ret=1; ret*ret<=x; ++ret);
        --ret;
        return ret;
    }
}; 
