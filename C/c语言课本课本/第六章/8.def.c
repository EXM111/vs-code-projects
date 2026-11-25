#include <stdio.h>
#include <windows.h>
#include <string.h>
// int main()
// {
//     SetConsoleOutputCP(65001);
//     char c[10]="China\nUSA\0";
//     puts(c);
//     return 0;
// }

// int main(){
//     SetConsoleOutputCP(65001);
//     char a[100]="abcdf of";
//     char b[10]="eeeexmi";
//     printf("%s",strcat(a,b));
//     return 0;
// }

// int main()
// {
//     SetConsoleOutputCP(65001);
//     char a[100]="abcdf of";
//     char b[10]="eeeexmi";
//     strcpy(a,b);
//     printf("%s",a);
//     return 0;
// }

// int main()
// {
//     SetConsoleOutputCP(65001);
//     char a[100] = "abcdf of";
//     char b[10] = "eeeexmi";
//     strncpy(a, b,4);
//     printf("%s", a);
//     return 0;
// }



// int main()
// {
//     SetConsoleOutputCP(65001);
//     char a[100] = "abcdf of";
//     char b[10] = "eeeexmii";
//     strcmp(a,b);
//     printf("%d", strcmp(a,b));
//     return 0;
// }

// int main()
// {
//     SetConsoleOutputCP(65001);
//     char a[100] = "abcdf of";
//     char b[10] = "eeeexmi";
//     printf("%d\n", strlen(a));
//     printf("%d\n", strlen(b));
//     return 0;
// }

// int main()
// {
//     SetConsoleOutputCP(65001);
//     char a[100] = "abcdf of";
//     char b[10] = "eeeexmi";
//     printf("%s\n", strupr(a));
//     printf("%s\n", strupr(b));
//     return 0;
// }

int main()
{
    SetConsoleOutputCP(65001);
    char a[100] = "abcdf of";
    char b[10] = "eeeexmi";
    printf("%s\n", strupr(a));
    printf("%s\n", strupr(b));
    printf("%s\n",strlwr(a));
    printf("%s\n",strlwr(b));
    return 0;
}
