#include<stdio.h>
void power(int*, int);
int main()
{
	int res, val;
	scanf("%d", &val);
	power(&res, val);
	printf("%d", res);
	return 0;
}
//implement the power function here
void power(int* res, int val){
    *res = 1<<val;
}
