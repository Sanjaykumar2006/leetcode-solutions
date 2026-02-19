int subtractProductAndSum(int n) {
    int a,product=1,sum=0,result;
    while(n>0){
        a=n%10;
        product*=a;
        sum+=a;
        n=n/10;
    }
    result=product-sum;
    return result;

}