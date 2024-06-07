#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Memory dynamically allocated using malloc. Total memory allocated is %d", *ptr);
    return 0;
}