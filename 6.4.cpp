
#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    float x1,x2,dt;
    printf("Nhap a: ");
    scanf("%f",&a);
    printf("Nhap b: ");
    scanf("%f",&b);
    printf("Nhap c: ");
    scanf("%f",&c);
    if (a == 0) 
      {
        if (b == 0) 
        {
            if (c == 0) 
            {
                printf("Phuong trinh vo so nghiem\n");
            } else 
            {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else 
        {
            x1 = -c / b;
            printf("Phuong trinh co 1 no duy nhat: x = %.2f\n", x1);
        }
      } 
    else 
    {
        dt = b * b - 4 * a * c;

        if (dt > 0) 
        {
            x1 = (-b + sqrt(dt)) / (2 * a);
            x2 = (-b - sqrt(dt)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        } else if (dt== 0) 
        {
            x1 = -b / (2 * a);
            printf("Phuong trinh co no kep: x = %.2f\n", x1);
        } else 
        {
            printf("Phuong trinh vo nghiem.\n");
        }
    }

    return 0;
}

