#include <stdio.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(65001);
    int t;
    int a[10];
    for (int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    for (int i=0;i<10;i++){
        for(int j=0;j<9-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for (int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}