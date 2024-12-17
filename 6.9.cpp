#include <stdio.h>

int main()
{
    int number,sum,a;
    printf("Cac so Armstrong co 3 chu so la:");
    for(int i=100;i<=999;i++)
    {
        number=i;
        sum=0;
        while(number>0)
        {
            a=number%10;
            sum+=a*a*a;
            number/=10;
        }
        if(sum==i)
        {
            printf(" %d",i);
        }
    }

    return 0;
}
