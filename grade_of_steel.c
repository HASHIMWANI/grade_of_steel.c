//grade of steel 
#include<stdio.h>
int main()
{
	float hardness,carbon_content,tensile_strength;
	printf("enter the values of the hardness,  carbon content and the tensile strength of the steel  for whom you want to get the  grade");
	scanf("%f %f %f",&hardness,&carbon_content,&tensile_strength);
	if(hardness>50 && carbon_content<0.7 && tensile_strength>5600)
	printf("the grade of the steel is 10");
	else if(hardness>50 && carbon_content<0.7)
	printf("the grade of steel is 9");
	else if(carbon_content<0.7 && tensile_strength>5600)
	printf("the grade of the steel is 8");
	else if(hardness>50 && tensile_strength>5600)
	printf("the grade of the steel is 7");
	else if(hardness>50 || carbon_content<0.7 || tensile_strength>5600)
	printf("the grade of steel is 6");
	else
	printf("the grade is 5");
	return 0;
}
