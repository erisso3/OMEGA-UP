#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b,c;
	int c1=0,c2=0,c3=0;
	scanf("%i %i", &a,&b);
	do{
		c=a;
		do{
			if(b==c){
				c3=1;
				
			}
			c=c*2;
			c1+=1;
		} while((c1!=20)&&(c3!=1));
		b=b*2;
		c2+=1;
		c1=0;
	} while((c2!=20)&&(c3!=1));
	if(c3!=1){
		printf("tristemil");
	}else{
		printf("felizmil");
	}
	return 0;
}
