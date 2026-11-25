#include <stdio.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(65001);
    int a[10][10];
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<=i;j++){
            if(j==0||j==i){
                a[i][j]=1;
            }
            else{
            a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<=i;j++){
            printf("%d  ",a[i][j]);
            if(j==i){
                printf("\n");
            }
        }
    }

    return 0;
}