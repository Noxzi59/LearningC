

/*
int main()
{   
    // assgining variables
    int Roll ;
    char name;
    float sub1 ,sub2 ,sub3 ,sub4 ,sub5 ,percent ,total;

    // getting input
    printf("enter your name");
    scanf("%s",&name);

    printf("\nenter your Roll number");
    scanf("%d",&Roll);

    printf("\nenter your marks in Hindi");
    scanf("%f",&sub1);
    printf("\nenter your marks in English");
    scanf("%f",&sub2);
    printf("\nenter your marks in Maths");
    scanf("%f",&sub3);
    printf("\nenter your marks in Science");
    scanf("%f",&sub4);
    printf("\nenter your marks in S.st");
    scanf("%f",&sub5);

    //getting total of all subjects
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("\nthe total marks of all 5 subject is = %f",total);

    // finding percentage
    percent = (total/500)*100;
    printf("\nthe Percentage of all 5 subject is = %f",percent);

    
    return 0;
}
*/


// employ management ssystem

/*#include <stdio.h>
int main()
{
    int employee_id;
    char employee_name[50];
    float salary, hra, pf, bonus, sum, next_salary;

    printf("Enter your employee id: ");
    scanf("%d", &employee_id);

    printf("Enter your employee name: ");
    scanf("%s",employee_name);

    printf("Enter your salary: ");
    scanf("%f",&salary);

    hra = 0.12 * salary;
    pf = 0.08*  salary;
    bonus = 0.40*salary
    ;

    printf("Your HRA is: %f\n",hra);
    printf("Your PF is: %f\n",pf);
    printf("Your bonus is: %f\n",bonus);

    
    sum = salary + hra + bonus;
    next_salary= sum-pf;
    printf("Your next salary is: %f\n", next_salary);
    return 0;
}
*/

#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    
    printf("enter the temperature in celsius:");
    scanf("%f",&celsius);

    fahrenheit=(celsius* 9/5)+32;
    printf("the temperature in fahrenheit is:%f",fahrenheit);
    
return 0;

}
