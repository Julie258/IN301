#include <stdio.h>
#include <stdlib.h>

int main()
{
	int temps,h,m,s,seconde;
	scanf("%d",&temps);
	seconde=temps;
	h=temps/3600;
	temps=temps%3600;
	m=temps/60;
	temps=temps%60;
	s=temps/60;
	printf ("%d correspond à %d heure %d minutes et %d secondes",seconde,h,m,s);

return 0;
}
	
