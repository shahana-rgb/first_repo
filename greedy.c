
	AIM:: TO IMPLEMENT GREEDY METHOD


	#include<stdio.h>
	void knapsack(int num,float weight[],float profit[],float cap)
	{
		int i;
		float x[20],u,tp=0.0;
		u=cap;
		for(i=0;i<num;i++)
		{
			if(weight[i]>u)
		break;
		else
		{
			x[i]=1.0;
			tp=tp+profit[i];
			u=u-weight[i];
		
			}
	}
	if(i<num)
	x[i]=u/weight[i];
	tp=tp+x[i]*profit[i];


	printf("the result");
	for(i=0;i<num;i++)
	{
		printf("%f\t",x[i]);
	

	}
	printf("value of tp %f",tp);
	}






	int main()
	{
	float cap,profit[20],weight[20],RATIO[20];
	int num,temp,i,j;
		printf("enter numberof object::");
		scanf("%d",&num);
			for(i=0;i<num;i++)
			{
				printf("enter weight and profit::");
				scanf("%f %f",&weight[i], &profit[i]);

			}
			printf("enter capacity::");
			scanf("%f",&cap);
				for(i=0;i<num;i++)
				{
				RATIO[i]=profit[i]/weight[i];	
		
			    }
			    for(i=0;i<num;i++)
			    {
			    for(j=i+1;j<num;j++)
			    {
					if (RATIO[i]<RATIO[j])
					{
			    temp=RATIO[j];
			    RATIO[j]=RATIO[i];
			    RATIO[i]=temp;
			    
			    temp=weight[j];
			    weight[j]=weight[i];
			    weight[i]=temp;
			    
			    temp=profit[j];
			    profit[j]=profit[i];
			    profit[i]=temp;
			    }}}
			    knapsack(num, weight,profit,cap);

	return 0;
	}

	OUTPUT::

	enter numberof object::3
	enter weight and profit::25
	8
	enter weight and profit::35
	6
	enter weight and profit::45
	9
	enter capacity::10
	the result0.400000	0.000000	1157978540898883906596814430859689984.000000	value of tp 3.200000

	------------------
	(program exited with code: 0)
	Press return to continue


