#include<stdio.h>
void pyramid(int n){
    int cycle = n;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=(2*n-1);j++){
            if((j==i+n)||(j==n-i)){
                printf("%d",i);
            }else{
                printf(" ");  
            }
        }
        
                printf("aaaaaaaa\n");
    }
}
int main()
{    
    int n;

    scanf("%d", n);
    pyramid(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
