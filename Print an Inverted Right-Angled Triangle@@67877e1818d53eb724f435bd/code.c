// Your code here...
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=1+n-i;j++){
        printf("*");
    }
    }
    return 0;
}