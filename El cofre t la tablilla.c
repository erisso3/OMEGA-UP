#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int a,b,c,d,e,f;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a>1&&a<1000||b>1&&b<1000||c>1&&c<1000||d>1&&d<1000||e>1&&e<1000||f>1&&f<1000){
		if((a*b*c)>(d*e*f))
			printf("0");
		else
			printf("1");
	}
	return 0;
}
