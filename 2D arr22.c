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
        int flag=1;
        for(int j=1;j<c;j++){
            if(arr[i][j]<=arr[i][j-1]){
                flag=0;
                break;
            }
        }
        if(flag==1)
            count++;
    }
    printf("%d",count);
}