#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b, sum, sum2,i;
	scanf("%d",&a);
	int v[a];
	for(i=0;i<a;i++){
		scanf("%d",&b);
		v[i]=b;
	}
	for(i=0;i<a;i++){
		sum2=0;
		while(sum != 0){
			sum=v[i]%10;
			v[i]=v[i]/10;
			sum2=sum2+sum;
		}
		if(sum2%2==0){
			printf("No UltraPrimo");
		}else{
			printf("UltraPrimo");
		}
		sum=sum2;
		printf("\n");
	}
	return 0;
}

