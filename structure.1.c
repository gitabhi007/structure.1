#include <stdio.h>
//structure to store information of employees
struct employee
{
  int emp_id;
  char emp_name;
  char emp_department;
  float salary;
};
int main()
{
  struct employee e[20];
  for(int i=0;i<20;i++)
  {
    printf("\nEnter id:");
    scanf("%d",&e[i].emp_id);
    printf("\nEnter name:");
    scanf("%S",e[i].emp_name);
    printf("\nEnter department:");
    scanf("%S",e[i].emp_department);
    printf("\nEnter salary");
    scanf("%f",&e[i].salary);
  }
  for(int i=0;i<20;i++)
  {
    printf("\n%d \t %S \t %S \t %f",e[i].emp_id,e[i].emp_name,e[i].emp_department,e[i].salary);
  }
  return 0;
}