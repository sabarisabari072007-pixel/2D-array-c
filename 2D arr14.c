#include<stdio.h>
int main(){
    int a,b,m=0,c=0,index=10;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j=0;j<b;j++){
        for(int i=0;i<a;i++){
            m=m+arr[i][j];
        }
        if(m>c){
            c=m;
            index=j;
        }
    }
    printf("%d",index);
    return 0;
}