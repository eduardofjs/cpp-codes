#include <stdio.h>
#include <ctype.h>
int main ()
{
    char a[5][5]={{'s','a','t','o','r'},{'a','r','e','p','o'},{'t','e','n','e','t'},{'o','p','e','r','a'},{'r','o','t','a','s'}};
    char S=(a[0][0]==a[4][4]);
    char R=(a[4][0]==a[0][4]);
    char A=(a[1][0]==a[0][1]&&a[4][3]==a[3][4]);
    char T=(a[2][0]==a[0][2]&&a[4][2]==a[2][4]);
    char O=(a[3][0]==a[0][3]&&a[4][1]==a[1][4]);
    char Ri=(a[1][1]==a[3][3]);
    char P=(a[3][1]==a[1][3]);
    char E=(a[2][1]==a[1][2]&&a[3][2]==a[2][3]);
    if (S&&R&&A&&T&&O&&Ri&&P&&E)
        printf ("e palindromo");
        else
            printf ("nao e palindromo");
    return 0;
}
