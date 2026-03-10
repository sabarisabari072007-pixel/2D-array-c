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
        int s=1;
        for(int j=0;j<c/2;j++){
            if(arr[i][j] != arr[i][c-1-j]){
                s=0;
                break;
            }
        }
        if(s==1)
            count++;
    }
    printf("%d",count);
}