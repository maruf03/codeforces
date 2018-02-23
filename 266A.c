#include <stdio.h>

int main()
{
    int i, n, count;
    char colors[51];
    
    scanf("%d", &n);
    scanf("%s", colors);
    
    count = 0;
    i=0;
    while(n--)
    {
        if(colors[i]==colors[i+1])
        {
            count++;
        }
        i++;
    }
    printf("%d", count);

    return 0;
}
