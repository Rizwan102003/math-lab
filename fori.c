#include<stdio.h>
#include<math.h>
int main(){
	float x,y,u,u1;
	int i,j,n,fact;
	printf("Enter no. of terms \n");
	scanf("%d",&n);
	float a[n][n+1];
	printf("Enter values of X \n");
	for(i=0;i<n;i++)
		scanf("%f",&a[i][0]);
	printf("Enter values of Y \n");
	for(i=0;i<n;i++)
		scanf("%f",&a[i][1]);
	printf("Enter the value of X for corresponding Y \n");
		scanf("%f",&x);
	for (j=2;j<n+1;j++)
		for(i=0;i<n-j+1;i++)
			a[i][j]=a[i+1][j-1]-a[i][j-1];
	printf("The difference table is as follows :\n");
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf("%f",a[i][j]);
		}
		printf("\n");
	}
	u=(x-a[0][0])/(a[1][0]-a[0][0]);
	y=a[0][1];
	u1=u;
	fact=1;
	for(i=2;i<=n;i++){
		y+=(u1*a[0][i])/fact;
		fact*=i;
		u1*=u-(i-1);
	}
	printf("\n Value of y at x = %f is = %f",x,y);
	return 0;
}
