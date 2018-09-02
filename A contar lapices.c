#include <stdio.h>

int main(int argc, char *argv[]) {
	int c,v,b;
	int c1=0,c2=0,c3=0;
	scanf("%d",&c);
	for(int i=0;i<c;i++){
		scanf("%i",&v);
		if(v==1){
			c1++;
		}
		if(v==2){
			c2++;
		}
		if(v==3){
			c3++;
		}
	}
	
	scanf("%d",&b);
	if(b==1){
		printf("%d",c1);
	}
	if(b==2){
		printf("%d",c2);
	}
	if(b==3){
		printf("%d",c3);
	}
	return 0;
}

