#include <stdio.h>
struct std {
    char name[50];
    char id[30];
    float cg;
};
int main() {
    int n,i,j;
    float max,*q;
    printf("Number of students: ");
    scanf("%d",&n);
    struct std *s;
    s =(struct std*)malloc(n*sizeof(struct std));//acting as an array of structure
    for (i = 0; i < n; i++) {
        printf("Information of student %d:",i+1);
        printf("\n");
        //name,id are already in an array so we didn'nt use &
        scanf("%s %s %f",s[i].name,s[i].id,&s[i].cg);
        //scanf("Name: %s  ID: %s  CGPA: %f",(s+i).name,(s+i).id,(s+i).cg);
        //Above scanf will not work since we can only write format specifier in scanf
    }
    max = s[0].cg;
    q = &max;
    for(i=1;i<n;i++){
       if(*q < s[i].cg){
        *q = s[i].cg;
        j = i;
      }
}
 printf("The person with the highest CGPA is: %s",s[j].name);

return 0;
}
<!DOCTYPE html>
<html>
<body>
<h2>Project Done by &copy; Nushrat Jaben Aurnima. All Rights Reserved .</h2>
</body>
</html>
