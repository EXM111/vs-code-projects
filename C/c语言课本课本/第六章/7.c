#include <stdio.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(65001);
    char c[][6] = {{" "," ","*"," "," "}, {" ","*"," ","*"," "}, {"*"," "," "," ","*"}, {" ","*"," ","*"," "}, {" "," ","*"," "," "}};
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%c",c[i][j]);
            if(j==4)
            printf("\n");
        }
    }
    return 0;
}