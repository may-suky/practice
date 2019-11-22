#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x>0)printf("+\n");
    else if(x<0)printf("-\n");
    else printf("0\n");
    printf("Hello World!\n");
    return 0;
}
