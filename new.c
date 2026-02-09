#include<stdio.h>
void main() {
    int i,j,k,r,c,sum=0;
    int a[10][10],b[10][10],m[10][10];
    printf("enter row size:\n");
    scanf("%d",&r);
    printf("enter size of column:\n");
    scanf("%d",&c);
    printf("enter %d*%d elements of A \n",r,c);
    for(i=0;i<r;i++){
    for(j=0;j<r;j++){
        scanf("%d",a[i][j]);

}
}
printf("enter %d*%d elements of B \n",r,c);
for(i=0;i<r;i++){
for(j=0;j<r;j++){
scanf("%d",b[i][j]);
}
}
for(i=0;i<r;i++){
for(j=0;j<r;j++){
    sum=0;
    for(k=0;k<c;k++){
        sum+=a[i][j]*b[i][j];

    }

m[i][j]=sum;
}
}
printf("multiplication of matrix A and B: \n");
for(i=0;i<r;i++){
for(j=0;j<r;j++){
    printf("%d\t",m[i][j]);
    printf("\n");
}
}
}
