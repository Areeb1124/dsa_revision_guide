class Solution {
  public:
 
    int largestPrimeFactor(int n) {
        // code here
       int maxPrime=-1;
       while(n%2 == 0){
           maxPrime=2;
           n=n/2;
       }
       for(int i=3;i*i<=n;i+=2){
           while(n%i==0){
               maxPrime=i;
               n=n/i;
           }
       }
       if(n>1){
           maxPrime=n;
       }
       return maxPrime;
    }
};
