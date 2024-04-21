#include <stdio.h>
#include <windows.h>

#define TRUE 1

int main ()
{
int s=0, m=0, h=0;
while (TRUE)
{
    system("cls");

    printf("%d:%d:%d",h,m,s);
    Sleep(1000);
    s++;
    if (s==60)
    {
        s=0;
        m++;
    }
    if (m==60)
    {
        m+0;
        h++;
    }
    if (h==24)
    {
        h=0;
    }
    
    
    
}

    return 0;
}