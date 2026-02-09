#include<stdio.h>
int add(int,int);
int main() {
    int a,b,c;
    printf("\n enter a,b \n");
    scanf("%d,%d",&a,&b);
    c=add(a,b);
    printf("addition of %d and %d is %d",a,b,c);
    return 0;

}
int add(int p,int q) {
    return(p+q);
}

