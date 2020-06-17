#include<stdio.h>
int min_Combination(int a,int b)
{
	int r;
	while(a%b)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return b;
}
int main()
{
	int ntc,n1,n2,result,i;
	scanf("%d",&ntc);//taking the input of no of test cases.
	for(i=0;i<ntc;i++)
	{
		scanf("%d%d",&n1,&n2);
		printf("%d",min_Combination(n1,n2));
	}
}
