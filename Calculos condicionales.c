#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,c=0;
	scanf("%d",&a);
	if(a%2==0){
		a=a/2;
		a++;
	}else{
		a++;
		c++;
	}if(a>=100){
		a=a/100;
		c++;
	}else{
		if(a<=99&&a>=10){
			a=a/10;
			c++;
		}
	}if(a%3==0){
		a--;
		c++;
	}
	printf("%d " "%d",a,c);
	return 0;
}

