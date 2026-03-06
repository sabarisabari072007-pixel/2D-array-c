#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0]*arr[1][0];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            for(int k=i+1;k<a;k++){
                for(int l=0;l<b;l++){
                    int p=arr[i][j]*arr[k][l];
                    if(p>max)
                    max=p;
                }
            }
        }
    }
    printf("%d",max);
}