#include <stdio.h>
int main()
{
	int h,m;
	printf("Enter the no of minutes");
	scanf("%d",&m);
	h=m/60;
	printf("%d minutes in hours=%d and %d in mins",m,h,m%60);
	return 0;c
}
