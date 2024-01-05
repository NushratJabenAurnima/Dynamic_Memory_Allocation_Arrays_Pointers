#include<stdio.h>
int main(){
int n, i,*p,max,*q;
printf("Input size of array: ");
scanf("%d",&n);
p = (int*)malloc(n*sizeof(int));
printf("Array element: ");
for(i=0;i<n;i++)
    scanf("%d",p+i);
max = *p;
q = &max;
for(i=1;i<n;i++){
    if(*q < *(p+i))
        *q = *(p+i);
}
printf("Expected Output: %d",*q);
return 0;
}
