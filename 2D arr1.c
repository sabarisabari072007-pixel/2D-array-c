#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++) {
        for(int j=0;j<b;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    int max2=arr[0][0];
    for(int i=0;i<a;i++) {
        for(int j=0;j<b;j++) {
            if(arr[i][j]>max) {
                max=arr[i][j];
            }
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i][j]>max2 && arr[i][j]!=max) {
                max2=arr[i][j];
            }
        }
    }
    printf("%d",max2);
    return 0;
}