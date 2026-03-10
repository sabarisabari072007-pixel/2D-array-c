#include<stdio.h>
int main(){
    int r,c,count=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int n = arr[i][j];
            int prime = 1;
            if(n < 2)
                prime = 0;
            else{
                for(int k=2; k<=n/2; k++){
                    if(n % k == 0){
                        prime = 0;
                        break;
                    }
                }
            }
            if(prime == 1)
                count++;
        }
    }
    printf("%d",count);
}