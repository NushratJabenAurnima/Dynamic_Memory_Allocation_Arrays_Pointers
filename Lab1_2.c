#include<stdio.h>
int main(){
  int i,n,a[50];
  printf("Array size: ");
  scanf("%d",&n);
  printf("Elements are: ");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  sortarray(n,a);
  printf("Expected Output: ");
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
 return 0;
}
int sortarray(int n , int *p){
int i,j,swap;
for(i=0;i<n;i++){
   for(j=i+1;j<n;j++){
       if(*(p+i)>*(p+j)){//previous comparing with later
        swap = *(p+i);
        *(p+i)= *(p+j);
        *(p+j) = swap;
       }
      }
    }
   return p;
}
<!DOCTYPE html>
<html>
<body>
<h2>Project Done by &copy; Nushrat Jaben Aurnima. All Rights Reserved .</h2>
</body>
</html>
