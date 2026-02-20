int maxProfit(int* prices, int pricesSize) {
    int b=0;
    int min=prices[0];
    for(int i=1;i<pricesSize;i++){
        if(prices[i]<min){
            min=prices[i];
        }
        if(prices[i]-min>b){
             b=prices[i]-min;
        }
    
}
return b;
}