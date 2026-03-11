#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        int allprime=1;
        for(int j=0;j<c;j++){
            int n=arr[i][j];
            int prime=1;
            if(n<2)
                prime=0;
            for(int k=2;k*k<=n;k++){
                if(n%k==0){
                    prime=0;
                    break;
                }
            }
            if(prime==0){
                allprime=0;
                break;
            }
        }
        if(allprime==1)
            count++;
    }
    printf("%d",count);
}