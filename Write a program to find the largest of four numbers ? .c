/*
Input Format

The first line informs you the number of test cases. Each separate line has four integer values to find the relation between the four integer values i.e. to find the largest of the four values

Constraints

-2147483647 ≤ n1,n2, n3, n4 ≤ 2147483647

Output Format

Largest of %d, %d, %d, %d is %d

Sample Input 0

3
90 45 12 100
10 190 100 1234
1290 823 100 56 

Sample Output 0

Largest of 90, 45, 12, 100 is 100 
Largest of 10, 190, 100, 1234 is 1234
Largest of 1290, 823, 100, 56 is 1290

*/



#include<stdio.h>

int main()
{
    int a[10],b[10],c[10],d[10];
    int TC,i;
    printf("enter number of testcase you need to test :");
    scanf("%d",&TC);

    for(i=1;i<=TC;i++)
    {
        scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);
    }
    for(i=1;i<=TC;i++)
    {
        if(a[i]>b[i] && a[i]>c[i] && a[i]>d[i])
    {
        printf("Largest of %d, %d, %d, %d is %d\n",a[i],b[i],c[i],d[i],a[i]);
    }
        else if(b[i]>c[i] && b[i]>d[i])
    {
        printf("Largest of %d, %d, %d, %d is %d\n",a[i],b[i],c[i],d[i],b[i]);
    }
        else if(c[i]>d[i])
    {
        printf("Largest of %d, %d, %d, %d is %d\n",a[i],b[i],c[i],d[i],c[i]);
    }
        else
    {
        printf("Largest of %d, %d, %d, %d is %d\n",a[i],b[i],c[i],d[i],d[i]);
    }
    }
    return 0;
}
