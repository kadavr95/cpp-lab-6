#include <iostream.h>
#include <conio.h>
#include <string>


void main()
{
	int a[200],n,i,j,max,x;
	cout<<"Enter number of elements in array: ";
	cin>>n;
	cout<<"Enter elements of array: ";
	for (i = 0; i <= n-1; i++)
	{
		cin>>a[i];
	}
	cout<<"Enter x: ";
	cin>>x;
	max=a[0];
	for (i = 1; i <= n-1; i++)
	{
		if (max<a[i])
			max=a[i];
	}
	for (i = 0; i <= n-1; i++)
	{
		if (a[i]==max)
		{
			for (j = n; j >= i+2; j--)
			{
				a[j]=a[j-1];
			}
			a[i+1]=x;
			n++;
			i++;
		}
	}
	cout<<"Result: ";
	for (i = 0; i <= n-1; i++)
	{
		cout<<a[i]<<" ";
	}
	getch();
}

