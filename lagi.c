#include<stdio.h>
int main()
{
	 float x[10], y[10], ip, s=0.0, p;
	 int i,j,n;
	 printf("Enter number of data: ");
	 scanf("%d", &n);
	 printf("Enter data:\n");
	 for(i=1;i<=n;i++)
	 {
		  printf("x[%d] = ", i);
		  scanf("%f", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%f", &y[i]);
	 }
	 printf("Enter interpolation point: ");
	 scanf("%f", &ip);
	 for(i=1;i<=n;i++)
	 {
		  p=1.0;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	p*= (ip - x[j])/(x[i] - x[j]);
			   }
		  }
		  s+= p * y[i];
	 }
	 printf("Interpolated value at %.3f is %.3f.", ip, s);
	 return 0;
}
