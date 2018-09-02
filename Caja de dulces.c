#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b;
	int	sum,c=0;
	scanf("%d %d",&a,&b);
	int v[a];
	for(int i=0;i<a;i++){
		scanf("%d",&v[i]);
	}
	for(int i=0;i<a-b;i++){
		sum=0;
		for(int j=0;j<b;j++){
			sum+=v[i+j];
		}
		if(sum>c){
			c=sum;
		}
	}
	printf("%d",c);
	return 0;
}

