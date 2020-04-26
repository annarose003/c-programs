/*
 * cplabstruct.c
 * 
 * Copyright 2020 Admin <Admin@JOYJACOB-PALLIV>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


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
	scanf("%s",a[i].name[20]);
	printf("\n enter employee id: ");
	scanf("%d",&a[i].EId);
	printf("\n enter salary: ");
	scanf("%f",&a[i].sal);
}
void print(int i)
{
	printf("\n name of the employee is %s ",a[i].name[20]);
	printf("%s",a[i].name[20]);
	printf("\n employee ID is %d \n",a[i].EId);
	printf("\n salary is %f",a[i].sal);
}

int main()
{
	int i,n;
	printf("enter number of employees: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	read(i);
	for(i=0;i<n;i++)
	print(i);
	return 0;
}

