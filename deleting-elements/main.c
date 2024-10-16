/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[50],n,pos;
    printf("size of array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("enter the position:");
    scanf("%d",&pos);
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("the array");
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    return 0;
}
    
