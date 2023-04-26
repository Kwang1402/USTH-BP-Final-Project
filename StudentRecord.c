#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "student.h"

int n;
student students[1003];

void input() {
    
    printf("Enter the number of students: ");
    printf("\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; ++i) {
        printf("Enter the information of student #%d\n", i);
        printf("ID: ");
        scanf("%s", students[i].id);
        printf("\n");
        
        printf("Fullname, last name and first name, seperated by a space: ");
        scanf("%s%s", students[i].fullName.lastName, students[i].fullName.firstName);
        printf("\n");

        printf("Birthdate in the format date month year: ");
        scanf("%d%d%d", &students[i].birthDay.day, &students[i].birthDay.month, &students[i].birthDay.year);
        printf("\n");

        printf("Algebra, Calculus, BP grade, seperated by a space: ");
        scanf("%f%f%f", &students[i].grade[0], &students[i].grade[1], &students[i].grade[2]);
        printf("\n");
    }
}

int main()
{

    input();

    for(int i = 1; i <= n; ++i) {
        printf("%s %s's average GPA is: %.2f \n", students[i].fullName.lastName, students[i].fullName.firstName, gpa(students[i]));
    }
}