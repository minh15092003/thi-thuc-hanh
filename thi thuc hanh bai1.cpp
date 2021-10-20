#include<stdio.h>

int tong(int num1, int num2);       
int hieu(int num1, int num2);
int tich(int num1, int num2);
float thuong(int num1, int num2);
        
main()
{
	int num1, num2;
	int add, sub, mul;
	float div;
	char pheptinh;
	
	printf("\nNhap vao so thu nhat: ");
	scanf("%d", &num1);
	printf("\nNhap vao so thu hai: ");
	scanf("%d", &num2);
	printf("\nNhap vao phep tinh ban muon.\n");
	fflush(stdin);
	scanf("%c", &pheptinh);
	
	switch(pheptinh)
	{
		case '+':
			add = tong(num1,num2);           
			printf("\nTong cua 2 so: %f", add);
			break;
		case '-':
			sub = hieu(num1,num2);         
		    printf("\nHieu hai so la: %d", sub);
			break;
		case '*':
			mul = tich(num1,num2);          
		    printf("\nTich hai so la: %d", mul);
		    break;
		case '/':
			if(num2 != 0)
			 {
			    div = thuong(num1,num2);    
		        printf("\nThuong hai so la: %f", div);
		        }
		    else
			    printf("\nNhap so thu hai khac 0!");     
			break;
		default:
		    printf("\nKhong co phep tinh ban chon!");				
	}
	return 0;
}
                         
int tong(int num1, int num2)
{
	return (num1 + num2);
}
int hieu(int num1,int num2)
{
	return (num1 - num2);
}
int tich(int num1, int num2)
{
	return (num1 * num2);
}
float thuong(int num1, int num2)
{
	    return ((float)num1/(float)num2);    
}
