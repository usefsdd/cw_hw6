#include <stdio.h>
int main()
{
    //slam man yousef hastem va daram proje ro taqieer midam
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