//Power of Two
class Solution {
public:
int isLeap(int N){
    if(N%400==0)
    return 1 ;
    
    else if (N % 4 == 0 && N%100 != 0){
        return 1 ;
    }else {
    return 0 ;
    }
}

};