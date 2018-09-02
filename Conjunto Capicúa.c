#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b;
	int	c=0;
	scanf("%d",&a);
	b=a-1;
	int v[a];
	int v2[a];
	for(int i=0;i<a;i++){
		scanf("%d",&v[i]);
		v2[b]=v[i];
		b=b-1;
	}
	for(int i=0;i<a;i++){
		if(v[i]==v2[i])
		c++;
	}
	if(c==a){
		printf("SI");
	}else{
		printf("NO");
	}	
	return 0;
}
