#include<stdio.h>
int numAdd(float);
void main()
{
	int added;
        float num;
        printf("\nenter any float number");
        scanf("%f",&num);
        added=numAdd(num);
        printf("\naddition of the numbers before the decimal %d\n",added);
}
int numAdd(float n)
{
	int n1,rem,sum=0;
	n1=n;
	while(n1!=0)
	{
		rem=n1%10;
		sum=sum+rem;
		n1=n1/10;
		
	}
return sum;

}
