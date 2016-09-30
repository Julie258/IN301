#include <stdio.h>
#include <stdlib.h>

int main()
{
	int temps,heures,minutes,secondes;
	scanf("%d",&temps);
	heures=temps/3600;
	minutes=temps/60;
	secondes=temps/60;
	printf ("%d correspond à %d heure %d minutes et %d secondes",temps, secondes,heures,minutes);
	printf("\n");
return 0;
}
	
