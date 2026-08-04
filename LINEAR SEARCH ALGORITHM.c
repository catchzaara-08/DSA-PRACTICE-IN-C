/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[]={15,8,23,10,5};
    int n=5;
    int key = 10;
    int found =0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element found at index %d",i);
            found = 1;
            break;
        }
    }
    if(found = 0){
        printf("Element not found");
    }
    
 

    return 0;
}