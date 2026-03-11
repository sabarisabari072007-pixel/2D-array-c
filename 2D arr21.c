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
    int maxlen=0;
    int row=0;
    for(int i=0;i<r;i++){
        int len=1;
        for(int j=1;j<c;j++){
            if((arr[i][j]%2==0 && arr[i][j-1]%2!=0)||(arr[i][j]%2!=0 && arr[i][j-1]%2==0)){
                len++;
            }
            else{
                break;
            }
        }
        if(len>maxlen){
            maxlen=len;
            row = i;
        }
    }
    printf("%d",row);
}