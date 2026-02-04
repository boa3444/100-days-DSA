#include <stdio.h>
#include <stdlib.h>

int maxProfit(int* prices, int pricesSize) 
{
    int min= prices[0], min_ind=0;
    int max=prices[0];
    int cond_sats =0;
    int temp= pricesSize;

    while (!cond_sats)
    {
        for (int i=0;i<pricesSize;i++)
        {
            if (min> prices[i])
	    {
                min = prices[i];
                min_ind = i;
		printf("min_ind: %d,  : %d\n" , min_ind, i);
	    }
        } 

	printf(" main min _ind: %d " , min_ind);
        if (min_ind != pricesSize-1) //not the last ele then:
	{
            cond_sats =1;
		break;
	}

        pricesSize--;
	printf("min:%d " , min);
    }

	
	printf("min index: %d " , min_ind);

    for (int i=min_ind;i<temp;i++)
    {
        if(max< prices[i])
            max = prices[i];

    }
	printf("max:%d\n", max);
    return max-min;

   
}

int main()
{
	int arr[6] = {7,1,5,3,6,4};
	int p = maxProfit(arr , 6);
	printf("\n%d" , p);
	return 0;
}
