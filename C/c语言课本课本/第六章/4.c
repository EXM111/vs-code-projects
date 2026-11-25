#include <stdio.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(65001);
    int a[2][3] ={{1,2,3},{4,5,6}};
    int b[3][2] = {{1,1},{2,2},{3,3}};
    int t;
    for (int i=0;i<2;i++)
        for(int j=0;j<3;j++)
        {
            t = a[i][j];
            a[i][j] = b[j][i];
            b[j][i] = t;
        }
    printf("array a:\n");
    for (int i=0;i<2;i++){
        for(int j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    printf("array b:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
    return 0;
}