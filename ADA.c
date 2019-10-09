#include <stdio.h>
#include <math.h>
void ascx(int x[],int size)
{
	int i,j,temp;

	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
}
void ascy(int y[],int size)
{
	int i,j,temp;

	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(y[j]>y[j+1])
			{
				temp=y[j];
				y[j]=y[j+1];
				y[j+1]=temp;
			}
		}
	}
}
void dscx(int x[],int size)
{
	int i,j,temp;

	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(x[j]<x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
}
void dscy(int y[],int size)
{
	int i,j,temp;

	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(y[j]<y[j+1])
			{
				temp=y[j];
				y[j]=y[j+1];
				y[j+1]=temp;
			}
		}
	}
}
void main()
{
	int x[100],y[100],z[100];
	int nx,ny,nz;
	int i,j,temp;
	printf("Enter size nx : ");
	scanf("%d",&nx);

	printf("Enter size ny : ");
	scanf("%d",&ny);

	printf("Enter the elements for x\n");
	for(i=0;i<nx;i++)
	{
		printf("Item %2d : ",i+1 );
		scanf("%d",&x[i]);
	}

	ascx(x,nx);

	printf("[ ");
	for(i=0;i<nx;i++)
	{
		printf("%d,",x[i] );
	}
	printf(" ]\n");

	printf("Enter the elements for y\n");
	for(i=0;i<ny;i++)
	{
		printf("Item %2d : ",i+1 );
		scanf("%d",&y[i]);
	}
	dscy(y,ny);

	printf("[ ");
	for(i=0;i<ny;i++)
	{

		printf("%d,",y[i] );
	}
	printf(" ]\n");

	for(i=0;i<nx;i++)
	{
		for(j=0;j<ny;j++)
		{
			if(x[i]>y[j])
			{
				temp=x[i];
				x[i]=y[j];
				y[j]=temp;
			}
		}
	}

	ascx(x,nx);
	ascy(y,ny);

	for(i=0;i<nx;i++)
	{
		z[i]=x[i];
	}
	for(i=0;i<ny;i++)
	{
		z[nx+i]=y[i];
	}

	printf("merged Z in ascending order : ");
	printf("[ ");
	for(i=0;i<nx+ny;i++)
	{
		printf("%d,",z[i] );
	}
	printf(" ]\n");
}
