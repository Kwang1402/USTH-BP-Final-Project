#ifndef STUDENT_H
#define STUDENT_H
typedef struct 
{
    int day, month, year;
} birthdate;

typedef struct
{
    char full[50];
    char lastName[25];
    char firstName[25];
} name  ;

typedef struct
{
    // student's id
    char id[25];
    
    //student's fullname

    // student's full name after splitting
    name fullName;
    
    // student birthdate
    birthdate birthDay;

    // overall grades of three subjects: Algebra, Calculus, Basic Programming respectively
    float grade[3];

    // function to calculate the gpa
} student;

#endif
