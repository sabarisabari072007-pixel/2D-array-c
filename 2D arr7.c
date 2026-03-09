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
        int min=arr[i][0];
        int col=0;
        
        for(int j=1;j<c;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
                col=j;
            }
        }
        int k;
        for(k=0;k<r;k++){
            if(arr[k][col]>min)
                break;
        }
        if(k==r)
            count++;
    }
    printf("%d",count);
    return 0;
}