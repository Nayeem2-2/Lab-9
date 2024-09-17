#include<stdio.h>
int main ()
{
    int n,arr[n],rem1,sum1=0,rem2,sum2=0;
    printf("enter the number of elements :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",arr[i]);
    for(int j = 0 ; j< n;j++)
    {
        rem1= arr[j]%2;
        if(rem1==0)
            sum1=sum1+rem1;
    }
    for(int j=0;j<n;j++)
    {
        rem2= arr[j]%2;
        if(rem2!=0)
            sum2=sum2+rem2;
    }
    int diff = sum1 - sum2;
    printf("%d",diff);

    return 0;


}