/* Enter your solutions in this file */
#include <stdio.h>
int max(int [], int);
int min(int [], int);
float average(int [], int);
int max(int x[],int k)
{
	int t,i;
	t=x[0];
	for(i=1;i<k;i++)
        {
		if(x[i]>t)
			t=x[i];
	}
	return(t);
}
int min(int x[],int k)
{
	int t,i;
	t=x[0];
	for(i=1;i<k;i++)
        {
		if(x[i]<t)
			t=x[i];
	}
	return(t);
}
float average(int a[], int n)
{
    
    int sum = 0;
    for (int i=0; i<n; i++)
       sum += a[i];
 
    return (float)sum/n;
}
