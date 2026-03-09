#include<stdio.h>
int main(){
    int a,b,m=1,max=1000,index=100,i;
    int count=0;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     for(int i=0;i<a;i++){
         m=1;
         for(int j=0;j<b;j++){
             m=m*arr[i][j];
         }
         if(m<max){
             m=max;
             i=index;
         }
     }
     
    
    printf("%d",i);
    
    return 0;

}