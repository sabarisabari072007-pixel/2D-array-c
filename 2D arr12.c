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
    int maxfreq=0,value=arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int count = 0;
            for (int x=0;x<r;x++){
                for(int y=0;y<c;y++){
                    if(arr[i][j]==arr[x][y]){
                        count++;
                    }
                }
            }
            if(count>maxfreq){
                maxfreq=count;
                value=arr[i][j];
            }
        }
    }
    printf("%d",value);
    
}