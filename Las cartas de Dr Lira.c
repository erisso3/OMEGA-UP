#include <stdio.h>
int main(int argc, char *argv[]) {
	int a,c,c2;
	scanf("%d", &a); 
	char v[100];
	scanf("%s", v);
	c=0;
	for(int i=0,co=0;i<a;i++,co++)
	{
		if(co%2==0)
		{
			if(v[i]=='B')
				c++;
		}
		else
		{
			if(v[i]=='W')
				c++;
		}
	}
	c2 = 0;
	for(int j=0,co=1;j<a;j++,co++)
	{
		if(co%2==0)
		{
			if(v[j]=='B')
				c2++;
		}
		else
		{
			if(v[j]=='W')
				c2++;
		}
	}
	if(c2>c)
		printf("%i",c);
	else
		printf("%i",c2);		
	return 0;
}
