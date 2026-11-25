#include <stdio.h>
#include <windows.h>
#include <string.h>
int main(){
    SetConsoleOutputCP(65001);
    char c[100] = "wo ai ni ya hen ai henai";
    char a;
    int num=0;
    int word=0;
    for(int i=0; c[i] !='\0';i++){
        if (c[i] == ' ')
        {
            word = 0;
        }
        else if( word==0){
            word=1;
            num++;
        }
    }
    printf("There are %d words in the c\n",num);
    return 0;
}