#include<stdio.h>
int main()
{
	int num1 =0;
	int num2 =0;
  	int i    =0;
	int shang=0;
 	scanf("%d%d",&num1,&num2);
	shang=num1;
	while(shang>=num2)
	{
		shang=num1-num2;
		i++;
		num1=shang;
		num2=num2;
	}
	if(shang<num2)
		printf("%d\n%d\n",i,shang);
}
