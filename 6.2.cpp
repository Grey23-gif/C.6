
#include <stdio.h>

int main()
{
    int number;
    int chan=0,le=0;
    for(int i=1;i<=5;i++)
    {
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d",&number);
    
    if(number%2!=0)
    {
        le++;
    }
    else
    {
        chan++;
    }
    }
    printf("c� %d so le\n",le);
    printf("c� %d so chan\n",chan);
    return 0;
}

