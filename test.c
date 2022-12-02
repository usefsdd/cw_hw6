#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for (int i = 1; i <= x; i++)
    {
        printf("%d : %d",i,x-i);
        if (i != x)
        {
            printf(",");
        }
        
    }
    
}