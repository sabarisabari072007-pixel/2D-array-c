#include<stdio.h>
int main(){
    int a,b,m=0,c=0;
    int count=0;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        count=0;
        c=0;
        for(int j=0;j<b;j++){
            m=arr[i][j];
            if(m%2==0){
                count++;
            }
            else{
            c++;
            }
            
            }
            if(count==c){
                printf("%d",i+1);
    }
    }
    return 0;
}