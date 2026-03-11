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
    int maxdiff=0;
    for(int i=0;i<r;i++){
        for(int k=i+1;k<r;k++){
            for(int j=0;j<c;j++){
                for(int l=0;l<c;l++){
                    int diff=arr[i][j]-arr[k][l];
                    if(diff<0)
                        diff=-diff;
                    if(diff>maxdiff)
                        maxdiff=diff;
                }
            }
        }
    }
    printf("%d",maxdiff);
}