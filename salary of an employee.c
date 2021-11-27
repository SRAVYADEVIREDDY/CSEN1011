#include<stdio>

//main program
int main()
{
	//variable to store values
	float basic, da, hra, ta, others;
	float pf,it;
	float net_salary;
	
	//input requiredfields
	printf("Enter Basic salary(S):");
	scanf("%f"",&basic);
	printf("Enter HRA (s):");
	scanf("%f",&hra);
	printf("Enter TA (s):");
	scanf("%f",ta);
	printf("Enter others (s):");
	scanf("%f",&others);
	
	//caluculate DA 12% of basic salary
	da=(basic*12)/100;
	//caluculate PF 14% of basic salary
	pf=("basic*14")/100;
	//caluculate IT 15% of basic salary
	it=(basic*15)/100;
	
	
	//caluculate net salary
	net salary_= basic+da+hra+ta+others-(pf+it);
	
	//printing net salary
printf("net salaryis:s%.02f/n",not-salary);

return 0;	
}
	
	

