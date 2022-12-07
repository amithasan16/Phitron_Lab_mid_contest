#include<stdio.h>
int main()
{
    long long int N,p;
    scanf("%lld",&N);
     
    if(N%3==0)
    {
      N=N/3;
      
printf("%lld\n",N);}
    
    
    else
    printf("%d\n",-1);
}