/*
Input Format

The first line informs you the number of test cases. Each separate line has three integer values to find the relation between the three integer values i.e. to find the smallest of the three values

Constraints

-2147483647 ≤ n1,n2 ≤ 2147483647

Output Format

Smallest of %d, %d, %d is %d

Sample Input 0

3
12 90 45
10 190 1234
1290 56 823

Sample Output 0

Smallest of 12, 90, 45 is 12
Smallest of 10, 190, 1234 is 10
Smallest of 1290, 56, 823 is 56
*/

#include <stdio.h>

int main()
{
    int a[10],b[10],c[10];
    int testcase,i;
    scanf("%d",&testcase);

    for(i=1;i<=testcase;i++)
    {

        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    for(i = 1;i<=testcase;i++)
    {
        if(a[i]<b[i] && a[i]<c[i])
    {
        printf("Smallest of %d, %d, %d is %d\n",a[i],b[i],c[i],a[i]);
    }
        else if(b[i]<c[i])
    {
        printf("Smallest of %d, %d, %d is %d\n",a[i],b[i],c[i],b[i]);
    }
        else
    {
        printf("Smallest of %d, %d, %d is %d\n",a[i],b[i],c[i],c[i]);
    }
    }
    return 0;
}
