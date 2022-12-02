#include <stdio.h>
int main()
{
    //i want to change my project but i don't know what can i do so this is a change
    int x;
    scanf("%d",&x);
    for (int i = 1; i <= x; i++)
    {
        printf("%d",i);
        if (i != x)
        {
            printf(",");
        }
        
    }
    
}