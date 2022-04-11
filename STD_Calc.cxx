#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	//For Spacing on Mac
	printf("\n");
	printf("\n");
	printf("\n");
	printf(".............\n");
	
	
	//Records How Many Points 'i'
	int i=0; //# points
	printf("How many points are in your dataset? ");
	scanf(" %d",&i);
	
	
	//Initializes Storage Array 'x[]' and Counter Variable 'n'
	double x[i];
	int n=0;
	
	
	//Prompts User to Input Data Points
	printf("\nType the points\n");
	
	
	//Allows User to Keep Inputting Values up to How Many Data Points
	while(n < i)
	{
		scanf(" %lf",&x[n]);
		n++;
	}
	printf("\n.............\n");
	n=0;
	
	
	//Prints User's Inputted Data Points
	while(n < i)
	{
		printf(" %lf",x[n]);
		n++;
	}
	printf("\n.............\n");
	
	
	//Returns Counter Variable to 0 and Initializes Variables for Mean
	n=0;
	double mean;
	double sum=0;
	
	
	//Finds the Sum of the Inputted Data Points in Array [x]
	while(n < i)
	{
		sum=sum+x[n];
		n++;
	}
	mean=sum/i;
	printf("\n\n___________________________________________________");	
	printf("\nmean = %lf",mean);
	
	
	//Returns Counter Variable to 0 and Initializes Variables for Standard Deviation
	n=0;
	double std_sum, STD;
	
	
	//Preforms Standard Deviation Calculations
	while (n < i)
	{
		std_sum = std_sum + ((x[n] - mean)*(x[n] - mean));
		n++;
	}
	
	STD = sqrt(std_sum/(i-1));
	
	printf("\nSTD = %lf",STD);
	printf("\n___________________________________________________\n\n\n");
	
	
	return 0;
}
