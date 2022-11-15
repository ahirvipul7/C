#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int a,b,c;
	float dis,r1,r2,i;
	printf("\n\n\n\tID : 22TDCS099\n\n");
	printf("Value of a : ");
	scanf("%d",&a);
	printf("Value of b : ");
	scanf("%d",&b);
	printf("Value of c : ");
	scanf("%d",&c);

	dis=(b*b)-(4*a*c);
	printf("\nDiscriminant = %.1f\n",dis);

	switch(dis>0.0f)
	{
		case 1:
		r1=(-b + sqrt(dis)) / (2*a);
		r2=(-b - sqrt(dis)) / (2*a);
		printf("\nroot1 = %f\nroot2 = %.1f",r1,r2);
		break;

		case 0:
		switch(dis<0.0f)
		{
			case 1:
			r2 = -b/(2*a);
			i=sqrt(-dis)/(2*a);
			printf("\nroot1 = root2 = %.1f\nimaginary root = %.1f",r1,i);
			break;

			case 0:
			r1 = r2 = -b/(2*a);
			printf("\nroot1 = root2 = %.1f",r1);
		}
	}
}
