	#include <stdio.h>
	
	int main() {
	    int number, dem = 0, n = 2, dem2;
	    printf("Nhap vao so nguyen duong n: ");
	    scanf("%d", &number);
	
	    
	    printf("Cac so nguyen to dau tien: ");
	    while (dem < number) 
	    {
	        dem2= 1; 
	
	        
	        for (int i = 2; i*i <= n; i++) 
	        {
	            if (n % i == 0) 
	            {
	                dem2 = 0; 
	                break;
	            }
	        }
	        if (dem2== 1) 
	        {
	            printf("%d ", n);
	            dem++;
	        }
	
	        n++; 
	    }
	
	    return 0;
	}
