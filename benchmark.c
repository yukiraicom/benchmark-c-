#include <stdio.h>
#include <time.h>
//#include<omp.h>

int main(void)
{
	int i,j,yakusuu,kazu;
	clock_t start,end;
	start = clock();
	//#pragma omp parallel for
	for(i = 1; i<100000; i++)
	{
		yakusuu = 0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0) yakusuu++;
		}
		if(yakusuu==2) kazu++;
		}
	printf("%d",kazu);
	printf("\n");
	end = clock();
	printf("%.2f秒かかりました\n",(double)(end-start)/CLOCKS_PER_SEC);
	return 0;
}
