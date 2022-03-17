#include <stdio.h>
char a[1000];
int main()
{
	int t=1;
	while(gets(a))
	{
		if(t>1)printf("\n");

		int ans[265]={};
		for(int i=0;a[i]!=0;i++)
		{
			char c=a[i];
			ans[c]++;
		}
		for(int f=1;f<1000;f++)
		{
			for(int c=128;c>=32;c--)
			{
				if(ans[c]==f)printf("%d %d\n",c,ans[c]);
			}
		}
		t++;
	}
	return 0;
}
