#include<stdio.h>
void main()
{
	float g;
	printf("enter grade: ");
	scanf("%f",&g);
	if(g>=85 && g<=100)
		printf("Grade A");
	else if(g>=70 && g<=84)
		printf("Grade B");
	else if(g>=55 && g<=69)
		printf("Grade C");
	else if(g>=40 && g<=54)
		printf("Grade D");
	else
		printf("Grade F");
}
