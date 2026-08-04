#include<stdio.h>

int main()
{
    int arr[]={10,20,30,40,50,60,70};

    int n=7;

    int key=60;

    int left=0;

    int right=n-1;

    while(left<=right)
    {
        int mid=(left+right)/2;

        if(arr[mid]==key)
        {
            printf("Element found at index %d",mid);
            return 0;
        }

        else if(key>arr[mid])
        {
            left=mid+1;
        }

        else
        {
            right=mid-1;
        }
    }

    printf("Element not found");

    return 0;
}