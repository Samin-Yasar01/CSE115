Name: Samin Yasar
ID: 2011279642
Course code: CSE115.

Name: Samin Yasar
ID: 2011279642
Course code: CSE115.

#include <stdio.h>
struct Point
{
    int p,q;
};
int main()
{
    printf ("How many points are there?\n");
    int n;
    scanf ("%d",&n);
    struct Point a[n];
    int i;
    for (i=0;i<n;i++)
    {
        printf ("input the points\n",i+1);
        printf ("X%d: ",i+1);
        scanf ("%d",&a[i].p);
        printf ("Y%d: ",i+1);
        scanf ("%d",&a[i].q);
        printf ("(%d,%d)\n", a[i].p, a[i].q);
    }
    int t= 0, possitive= 0, negative= 0;
    for(i=0;i<n-1;i++)
    {
        possitive+= a[i].p * a[i+1].q;
    }
    for(i=0;i<n-1;i++)
    {
        negative+= a[i].q * a[i+1].p;
    }
    possitive+= a[n-1].p * a[0].q;
    negative+= a[n-1].q * a[0].p;
    t= possitive-negative;
    double area= t/2.0;
    if(area < 0)
        printf("The area is= %lf\n", -area);
    else
        printf("The area is= %lf\n", area);
    return 0;
}
