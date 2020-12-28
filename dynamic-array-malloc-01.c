#include <stdio.h>
#include <stdlib.h>

void mallocArray()
{
	int n = 5;
	int *a = (int*) malloc( n*sizeof(int) );

	for( int i = 0; i < n; i++ )
	{
		a[i] = i + 1;
	}
	for( int i = 0; i < n; i++ )
	{
		printf("%d : %u\n", a[i], &a[i] );
	}
	
	free( a );
}

int main()
{

	mallocArray();


	return 0;
}
