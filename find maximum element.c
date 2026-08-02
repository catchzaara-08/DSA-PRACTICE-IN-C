/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[5] = {4,7,2,9,5};
    int max = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    printf("%d",max);
    return 0;
}
