/* Enter your solutions in this file */
#include <stdio.h>
#include<math.h>
int max(int [], int);
int min(int [], int);
float average(int [], int);
int mode(int [], int);
int factors(int, int []);
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
int mode(int a[], int n)
{
  int count = 1, tempCount;
  int popular = a[0];
  int temp = 0;
  for (int i = 0; i < (n - 1); i++)
  {
    temp = a[i];
    tempCount = 0;
    for (int j = 1; j < n; j++)
    {
      if (temp == a[j])
        tempCount++;
    }
    if (tempCount > count)
    {
      popular = temp;
      count = tempCount;
    }
  }
  return popular;
}
int factors(int n, int x[]){
	int j=0;
for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                x[j]=i;
                j++;
                
            }
        }
return j;
    
    
} 
