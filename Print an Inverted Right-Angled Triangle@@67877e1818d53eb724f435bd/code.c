// Your code here...
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i+n-1;j++){
        printf("%d",j);
    }
    }
    return 0;
}