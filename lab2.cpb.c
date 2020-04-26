//Anna Rose Pallivathuckal
//CSE Alpha, 40
//RET19CS041
#include <stdio.h>
#include <math.h>
struct point
{
    float x,y,z;
}a,b,c,d;
void read(struct point *p)
{
    printf("\nenter x coordinate value ");
    scanf("%f",&p->x);
    printf("\nenter y coordinate value ");
    scanf("%f",&p->y);
    printf("\nenter z coordinate value ");
    scanf("%f",&p->z);

}
float dist(struct point p,struct point q)
{
    float s;
    s=pow((p.y-q.y),2)+pow((p.x-q.x),2)+pow((p.z-q.z),2);
    s=pow(s,0.5);
    return s;
}
int main()
{
    float d1,d2,sum;
    printf("enter first pair of points\npoint 1 ");
    read(&a);
    printf("\npoint 2 ");
    read(&b);
    printf("enter second pair of points \npoint 1 ");
    read(&c);
    printf("\npoint 2 ");
    read(&d);
    d1=dist(a,b);
    d2=dist(c,d);
    printf("\n distance between points (%f,%f,%f) and (%f,%f,%f) is %f",a.x,a.y,a.z,b.x,b.y,b.z,d1);
    printf("\n distance between points (%f,%f,%f) and (%f,%f,%f) is %f",c.x,c.y,c.z,d.x,d.y,d.z,d2);
    sum=d1+d2;
    printf("\n sum of the distances is %f",sum);
    return 0;

}
