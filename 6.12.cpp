
#include <stdio.h>

int main()
{
    int n,a=0,b=1,next;
    printf("Nhap so nguyen N: ");
    scanf(" %d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d ", a);   
        next = a + b;       
        a = b;              
        b = next;           
    }
    

    return 0;
}
