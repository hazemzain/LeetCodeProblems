int minCostClimbingStairs(int* cost, int costSize) {
   
   int ans ;
    int* stairs = (int*)malloc(costSize * sizeof(int));
    stairs[0] = cost[0];
    stairs[1] = cost[1];
    
    for(int i = 2; i < costSize; i++){
        stairs[i] = (stairs[i-1] <= stairs[i-2]) ? (stairs[i-1] + cost[i]) : (stairs[i-2] + cost[i]);
    }
    
    ans = fmin(stairs[costSize-1], stairs[costSize-2]);
    
    free(stairs);
    return ans;
   
}