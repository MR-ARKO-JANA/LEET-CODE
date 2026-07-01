int climbStairs(int n) {
    int result ;
    if (n <= 2){
    return n;
    }
   int  prev1 = 1;
   int  prev2 = 2;
   int current_way ;
   for (int i = 3 ; i<=n; i++){
    current_way = prev1 + prev2;
    prev1 = prev2;
    prev2 =  current_way;
   }
   return current_way;
    
}