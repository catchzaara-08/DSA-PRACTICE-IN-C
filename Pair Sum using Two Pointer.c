/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[]={12,20,25,33,40,47};
    int n=6;
    int target = 60;
    int left = 0;
    int right = n-1;
    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum==target){
            printf("Pair Found: %d %d",arr[left],arr[right]);
            return 0;
        }
        else if(sum<target){
            left ++;
        }
        else{
            right--;
        }
    }
    printf("Pair not found");

    return 0;
}