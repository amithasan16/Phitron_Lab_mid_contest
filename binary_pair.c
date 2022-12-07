#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,n,count1=0,count2=0,sum=0;
    char arr[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
           scanf("%c",arr[i]);
        }
if(strstr(arr[i],"10"))
{
    count1++;
}
else if(strstr(arr[i],"01"))
{
    count2++;
}
    }
     sum=count1+count2;
printf("%d\n",sum);
}