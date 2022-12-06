#include<stdio.h>


int main()
{
	int num2 = 0;
	int num1=0;
	float shang=0;
	int wei=0;
	scanf("%d%d",&num1,&num2);
	
	
	while(num1-0.00001*wei*num2>=0.00001*num2)
	{
		wei=wei+1;
		
	}
	shang=wei*0.00001;
	printf("%f\n",shang);
	
	return 0;
}

