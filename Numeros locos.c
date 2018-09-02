#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b,i,c,s;
	int d=0;
	scanf("%d",&a);
	scanf("%d",&b);
	int v[b];
	for(i=1;i<=b;i++){
		scanf("%d",&c);
		v[i]=c;
	}
	for(i=1;i<=b;i++){
		if (i<b)
			s=v[i]+v[i+1];
		else{
			s=v[i]+v[1];
		}
		if (s%a==0)
			d=d+1;
	}
	printf("%d",d);
	return 0;
}

