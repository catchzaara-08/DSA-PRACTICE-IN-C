#include<stdio.h>

int main()
{
    int arr[]={-7,-3,2,3,11};

    int n=5;

    int result[5];

    int left=0;

    int right=n-1;

    int index=n-1;

    while(left<=right)
    {
        int leftSquare=arr[left]*arr[left];

        int rightSquare=arr[right]*arr[right];

        if(leftSquare>rightSquare)
        {
            result[index]=leftSquare;

            left++;
        }

        else
        {
            result[index]=rightSquare;

            right--;
        }

        index--;
    }

    printf("Sorted Squares:\n");

    for(int i=0;i<n;i++)
    {
        printf("%d ",result[i]);
    }

    return 0;
}