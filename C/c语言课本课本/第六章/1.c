#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    int i,a[10];
    for (i=0;i<10;i++){
        a[i]=i;
    }
    for (i=9;i>=0;i--){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
    

}