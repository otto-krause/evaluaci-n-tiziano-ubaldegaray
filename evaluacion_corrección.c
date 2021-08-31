#include<stdio.h>
//#include<stdl#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n=0, I=0, a = 0 , b = 1 , c=0;
	printf("Ingrese el numero:");
	//scanf("d%" , &n);
        scanf("%d" , &n);
		switch (n)
		{
		case 0:
			printf("0");
			break;
		case 1:
			printf("0,1");
			break;
		default:
			printf("0,1,");
			for (I = 2; I <=n; I++)
			{
				c = a + b;
				printf("%d,", c);
				a = b;
				b = c;
			}
			printf("\n");
			break;
		} 
	//return 5;
        return 0;
}