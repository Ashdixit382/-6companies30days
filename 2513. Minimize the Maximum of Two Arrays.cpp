class Solution {
public:
     long long LCM(long long a, long long b) 
{ 
    long long greater = max(a, b); 
    long long smallest = min(a, b); 
    for (int i = greater; ; i += greater) { 
        if (i % smallest  == 0) 
            return i; 
    } 
}

bool check(long long x,int div1, int div2,int uniqueCnt1, int uniqueCnt2){
     long long commonnumber = x/(LCM(div1,div2));
     long long number_div1 = x/div1 - commonnumber;
     long long number_div2 = x/div2 - commonnumber;
     long long remainingnum = x - (number_div1 + number_div2 + commonnumber);
     cout<<"for this x "<<x<<" remainingnum "<<remainingnum<<endl;
     cout<<"number_div1 "<<number_div1<<" number_div2 "<<number_div2<<endl;
     if(uniqueCnt1 > number_div2) 
     remainingnum -= (uniqueCnt1 - number_div2);
     if(uniqueCnt2 > number_div1)
     remainingnum -= (uniqueCnt2 - number_div1);
      cout<<"for this x "<<x<<" remainingnum "<<remainingnum<<endl;
     return (remainingnum >= 0);

}


    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        long long low = 1;
        long long high = 1e10;
        long long mid;
        while(low <= high){
              mid = low + (high - low)/2;
              if(check(mid,divisor1,divisor2,uniqueCnt1,uniqueCnt2)){
                  high = mid-1;
              }
              else{
                  low = mid+1;
              }
        }
        return low;
    }
};