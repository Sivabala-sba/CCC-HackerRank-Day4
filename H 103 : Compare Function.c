#include<stdio.h>
int compare(int,int);
int main()
{
    int val1, val2, cmp;
    scanf("%d%d", &val1, &val2);
    cmp=compare(val1, val2);
    if (cmp == 1) printf("Value 1 is greater");
    else if (cmp == -1) printf("Value 2 is greater");
    else printf("Both Values are equal");
    return 0;
}
int compare(int val1, int val2){
    if(val1>val2)
        return 1;
    else if (val2>val1)
        return -1;
        else return 0;
}
