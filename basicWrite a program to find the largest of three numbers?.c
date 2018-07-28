/* 
Input Format

The first line informs you the number of test cases. Each separate line has three integer values to find the relation between the three integer values i.e. to find the largest of the three values

Constraints

-2147483647 ≤ n1,n2 ≤ 2147483647

Output Format

Largest of %d, %d, %d is %d

Sample Input 0

3
12 90 45
10 190 1234
1290 56 823

Sample Output 0

Largest of 12, 90, 45 is 90
Largest of 10, 190, 1234 is 1234
Largest of 1290, 56, 823 is 1290 

*/


#include <stdio.h>

int main()
{
    int a[10],b[10],c[10];
    int testcase,i;
    printf("enter number of testcase you need :");
    scanf("%d",&testcase);

    for(i=1;i<=testcase;i++)
    {

        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    for(i = 1;i<=testcase;i++)
    {
        if(a[i]>b[i] && a[i]>c[i])
    {
        printf("Largest of %d %d %d is %d\n",a[i],b[i],c[i],a[i]);
    }
        else if(b[i]>c[i])
    {
        printf("Largest of %d %d %d is %d\n",a[i],b[i],c[i],b[i]);
    }
        else
    {
        printf("Largest of %d %d %d is %d\n",a[i],b[i],c[i],c[i]);
    }
    }
    return 0;
}
