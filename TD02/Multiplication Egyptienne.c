#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,x,y;
	a=0;
	scanf("%d",&x);
	scanf("%d",&y);
	printf("%d*%d\n",x,y);
	while(x!=1){
		if(x%2==1){
			a=a+y;
			x=x-1;
			printf("%d*%d+%d\n",x,y,a);}
		else{x=x/2;
			y=y*2;
		printf("%d*%d+%d\n",x,y,a);
			}
		printf("%d\n",y+a);
	}
return 0;
}
