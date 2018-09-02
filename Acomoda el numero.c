#include <stdio.h>
int main(int argc, char *argv[]){
	int a,b;
	int	c=0;
	scanf("%i",&a);
	struct numero{
		int p;
	}numero[a];
	for(int i=0;i<a;i++){
		scanf("%i",&numero[i].p);
	}
	b=0;
	do{
		if(numero[0].p > numero[b].p)
			c++;
		b++;
	}while(b!=a);
	printf("%i",c);
 }
