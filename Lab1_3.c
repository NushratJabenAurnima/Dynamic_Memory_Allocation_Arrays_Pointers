#include<stdio.h>
int main(){
int n,i,j,*p;
printf("Input size of array: ");
scanf("%d",&n);
p = (int*)malloc(n*sizeof(int));
printf("Array element: ");
for(i=0;i<n;i++)
    scanf("%d",p+i);
for(i=0;i<n;i++){
    if(*(p+i)<0){
        for(j=i;j<n;j++){
            *(p+j)= *(p+j+1);//assigning the next value in the place of the negative
        }
        n--;//altering the size
        i--;//running the loop till end
    }
}
printf("Expected Output: ");
for(i=0;i<n;i++)
    printf("%d  ",*(p+i));
return 0;
}
<!DOCTYPE html>
<html>
<body>
<h2>Project Done by &copy; Nushrat Jaben Aurnima. All Rights Reserved .</h2>
</body>
</html>
