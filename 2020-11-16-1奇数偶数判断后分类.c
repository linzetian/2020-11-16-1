//pow,1 1 2 3 5 8 13...
//奇数偶数判断后分类。
#include<stdio.h>
#include<math.h>
int main()
{
	int n=0, i=0, f = 0, f1 = 1, f2 = 2;
	double x, s, p1=0, p2=0;
	scanf("%lf %d",&x,&n);
	for (i = 1; i <= n; i++)
	{
		f = f1 + f2;
		if (i % 2 == 1)
		{
			p1 += (f1 / (double)f2) * pow(x, -1);
		}
		else
			p2 += (f1 / (double)f2) * (-x);
		f1 = f2;
		f2 = f;
	}
	s = p1 + p2;
	printf("s=%6.3lf",s);
	return 0;
}