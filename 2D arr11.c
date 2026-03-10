#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<r;i++){
        int sorted = 1;
        
        for(int j=0;j<c;j++){
            if(arr[i][j]>arr[i][j+1]){
                sorted = 0;
                break;
            }
        }
        if (sorted == 1)
            count++;
    }
    printf("%d",count);
}