#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "student.h"
#include "validate.h"
#include "input.h"
#include "grade.h"
#include "age.h"

int n;
student students[1003];

int main()
{
    input(students, &n);
    
    printf("\n*************************************************************************************************************************"); 
    printf("\n                                                       STUDENT LIST "); 
    printf("\n*************************************************************************************************************************"); 
    printf("\nStudent ID \tFirst Name \tLast Name \tBirthdate \tAlgebra \tCalculus \tBP \t\tGPA\n");

    for(int i = 1; i <= n; ++i){
        printf("\n%-10s \t%-10s \t%-10s \t%d/%d/%d \t%-10.2f \t%-10.2f \t%-10.2f \t%-10.2f \n",students[i].id,students[i].fullName.lastName, students[i].fullName.firstName,students[i].birthDay.day, students[i].birthDay.month,students[i].birthDay.year,students[i].grade[0], students[i].grade[1], students[i].grade[2],gpa(students[i]));
    }

    findOldest(students, n);
    findYoungest(students, n);
    highestGPA(students, n);
    lowestGPA(students, n);
    highestBP(students, n);
}


