#include<stdio.h>
int main(){
    int r,c,sum=0,min=0,index=1;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j=0;j<c;j++){
        min+=arr[0][j];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        if(sum<min){
            min=sum;
            index=i;
        }
    }
    printf("%d",index);
    
}