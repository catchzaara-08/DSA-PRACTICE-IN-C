#include<stdio.h>

int main()
{
    int arr[]={4,2,1,7,8,1,2,8,1,0};

    int n=10;

    int k=3;

    int windowSum=0;

    for(int i=0;i<k;i++)
    {
        windowSum+=arr[i];
    }

    int maxSum=windowSum;

    for(int i=k;i<n;i++)
    {
        windowSum=windowSum-arr[i-k]+arr[i];

        if(windowSum>maxSum)
        {
            maxSum=windowSum;
        }
    }

    printf("Maximum Sum = %d",maxSum);

    return 0;
}