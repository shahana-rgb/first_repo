/*
   TITLE:IMPLEMENT GREEDY METHOD USING KNAPSACK PROBLEM
   */	
	#include <stdio.h>
	
	void knapsack(int n ,float weight[],float profit[],float capacity)
	{
	float u,x[20],tp=0.0;
	int i;
	u=capacity;
	
	for(i=0;i<n;i++)
	{
		   if(weight[i]>u)     
		   break;
		   else
		   {
			   x[i]=1.0;    
			   tp=tp+profit[i]; //calculating total profit
			   u=u-weight[i];    
			   
			   }
		   }
			   
			   if(i<n)
			   {
				   x[i]=u/weight[i];
				   tp=tp+(x[i]*profit[i]);
				   printf("\nThe value of fraction is:");
				   for(i=0;i<n;i++)
				   printf("%f",x[i]);
				   printf("Maximum value is: %f",tp);
			   }
	}
int main()
{
	float weight[20],profit [20],capacity;
	int num,i,j;
	float ratio[20],temp;
	
	printf("Enter the number of objects:");
	scanf("%d",&num);
	
		printf("Enter the weights and profits respectively:");
		{
			for(i=0;i<num;i++)
			{
				scanf("%f%f",&weight[i],&profit[i]);
				}
			}
			
		printf("Enter the capacity of an object:");
		scanf("%f",&capacity);
		
			for(i=0;i<num;i++)
			{
				ratio[i]=profit[i]/weight[i]; // claculating ratio for finding less weight and more profit
				}
				
				for(i=0;i<num;i++)
				{
					for(j=i+1;j<num;j++)
				{
				if(ratio[i]<ratio[j])   // arranging the weights,ratio and profit
				{
					temp=ratio[j];
					ratio[j]=ratio[i];
					ratio[i]=temp;
					
					temp=weight[j];
					weight[j]=weight[i];
					weight[i]=temp;
					
					temp=profit[j];
					profit[j]=profit[i];
					profit[i]=temp;
					
					}	
						}
					}
					
					knapsack(num,weight,profit,capacity);  //calling knapsack function
					return 0;
	        }
		/*
		OUTPUT:
				Enter the number of objects:3
		Enter the weights and profits respectively:
		18 25
		15 24
		10 15
		Enter the capacity of an object:20
		
		The value of fraction is:1.0000000.5000000.000000Maximum value is: 31.500000
		--------------------------------
		
		*/
