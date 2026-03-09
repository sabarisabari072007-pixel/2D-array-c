#include<stdio.h>
int main()
{
    int a,b,c=0,m=0,d=0;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    int arry[a];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        c=0;
        for(int j=0;j<b;j++){
             c+=arr[i][j];
        }
        arry[i]=c;
        }
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            int d=arry[i]-arry[j];
            if(d<0)
            d=-d;
            if(d>m)
            m=d;
        }
        }
    printf("%d",m);
    return 0;
}