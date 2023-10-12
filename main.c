#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(n)
{
	int res = 1;
	int i;
	for ( i = 1 ; i <= n ; i++ )
		res *= i;
	
	return res;
}

int combination(int n, int r)
{
	int boonmo, boonja;
	
	boonja = factorial(n);
	boonmo = factorial(n-r)*factorial(r);
	
	return (boonja/boonmo);
	
}

int main(int argc, char *argv[])
{
	int n, r;
	int result;
	
	// 1. input n and r
	printf("input n: \n");
	scanf("%d", &n);
	
	printf("input r: \n");
	scanf("%d", &r);
	

	// 2. calculate each boonmo, boonja and final result
	result = combination(n, r);
	
	// 3. print it
	printf("result is %d.\n", result);

}
