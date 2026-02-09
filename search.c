#include<stdio.h>
void main() {
    int a[100],n,key,i,low,high,mid,found=0;
printf("number of elements:\n");
scanf("%d",&n);
printf("enter sorted elements:\n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);

}
printf("enter search element \n");
scanf("%d",&key);
low=0;
high=n-1;
mid=(low-mid)/2;
if(a[mid]==key) {
    printf("element was found %d",i+1);

}
else if(key>a[mid]){
    for(i=mid+1;i<n;i++){
        if(a[i]==key)
        printf("element was found %d",i+1);

    }

}
else if(key<a[mid])
for(i=mid-1;i>=low;i--){
    if(a[i]==key){
        printf("element was not found in %d",i+1);

    }
}
}