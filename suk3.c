#include<stdio.h>
#include<math.h>
main()
{
	int x1,y1,x2,y2;
	float r;
	printf("enter first coordinate of first pt/nenter second coordinate of first pt/nenter first coordinate of second pt/nenter second coordinate of second pt\n");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	r=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("the result is %f",r);
	return 0;
}
