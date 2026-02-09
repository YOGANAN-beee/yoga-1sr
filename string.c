#include<stdio.h>
void main() {
    char name[30];int i,found=0,key;
    printf("enter a name \n");
    scanf("%s",name);
    printf("enter a character to find \n");
    scanf("%c",&key);

    for(i=0;name[i]!='\0';i++){
        if(key==name[i]){
            found=1;
            
        
            
        }
        }
        if(found==1){

        printf("character found");
        }

        else{
        printf("character not found \n");
        }
}

    
