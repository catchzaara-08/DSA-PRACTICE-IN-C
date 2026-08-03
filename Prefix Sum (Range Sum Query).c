#include<stdio.h>

int main()
{
    int arr[]={3,1,4,1,5,9,2};

    int n=7;

    int prefix[8];

    prefix[0]=0;

    for(int i=1;i<=n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i-1];
    }

    int left=2;

    int right=5;

    int sum=prefix[right+1]-prefix[left];

    printf("Sum = %d",sum);

    return 0;
}