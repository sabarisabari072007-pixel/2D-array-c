#include<stdio.h>
int main(){
    int a,b,max=0,index=0;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        int count=0;  
        for(int j=0;j<b;j++){
            int s=1;
            for(int k=0;k<b;k++){
                if(j!=k && arr[i][j]==arr[i][k]){
                    s=0;
                }
           }
            if(s==1)
                count++;
        }
        if(count>max){
            max=count;
            index=i;
        }
    }
    printf("%d",index);
    return 0;
}