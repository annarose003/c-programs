//Anna Rose Pallivathuckal
//CSE Alpha, 40
//RET19CS041
#include <string.h>
#include <stdio.h>
struct emp
{
	char name[20];
	int EId;
	float sal;
}a[50];
void read(int i)
{
	printf("\n enter name: ");
	scanf("%s",&a[i].name);
	printf("\n enter employee id: ");
	scanf("%d",&a[i].EId);
	printf("\n enter salary: ");
	scanf("%f",&a[i].sal);
}
int print(int i)
{

	printf("\n\n name of the employee is %s ",a[i].name);
	printf("\n employee ID is %d ",a[i].EId);
	printf("\n salary is %f",a[i].sal);
}

int main()
{
	int i,n;
	printf("enter number of employees: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  read(i);
	printf("\n\t Employee Details\n");
	for(i=0;i<n;i++)
	  print(i);
	return 0;
}

