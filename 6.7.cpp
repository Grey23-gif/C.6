
#include <stdio.h>

int main()
{
    int number;
    printf("Nhap so nguyen: ");
    scanf("%d",&number);
    printf("Cac uoc cua so %d la: ",number);
    for(int i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            printf("%d ",i);
        }
    }
    
    return 0;
}

