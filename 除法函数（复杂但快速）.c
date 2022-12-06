#include<stdio.h>


int main()
{
  int num2 = 0;
  int i    =0;
  int shang=0;
  float shangfu=0;
  float xiaoshu=0;
  int wei=0;
  int wei2=0;
  int wei3=0;
  int wei4=0;
  int wei5=0;
  int wei6=0;
  scanf("%d%d",&shang,&num2);
  
  while(shang-0.1*wei*num2>0.1*num2)
  {		
	  wei=wei+1;
  }
  shangfu=0.1*wei;
  xiaoshu=shang-0.1*wei*num2;
 
 
  while(xiaoshu-0.01*wei2*num2>0.01*num2)
  {
	  wei2=wei2+1;
	 
  }
  shangfu=shangfu+wei2*0.01;
  xiaoshu=xiaoshu-num2*0.01*wei2;
  while(xiaoshu-0.001*wei2*num2>0.001*num2)
  {
	  wei3=wei3+1;
	  
  }
  shangfu=shangfu+wei3*0.001;
  xiaoshu=xiaoshu-num2*0.001*wei3;
  while(xiaoshu-0.0001*wei3*num2>0.0001*num2)
  {
	  wei3=wei3+1;
	  
  }
  shangfu=shangfu+wei3*0.0001;
  xiaoshu=xiaoshu-num2*0.0001*wei3;
  while(xiaoshu-0.00001*wei4*num2>0.00001*num2)
  {
	  wei4=wei4+1;
	  
  }
  shangfu=shangfu+wei4*0.00001;
  xiaoshu=xiaoshu-num2*0.00001*wei4;
  while(xiaoshu-0.00001*wei5*num2>0.00001*num2)
  {
	  wei5=wei5+1;
	  
  }
  shangfu=shangfu+wei5*0.00001;
  xiaoshu=xiaoshu-num2*0.00001*wei5;
  printf("%f\n",shangfu);
  
  return 0;
}

