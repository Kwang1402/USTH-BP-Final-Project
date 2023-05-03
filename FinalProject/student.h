#ifndef STUDENT_H
#define STUDENT_H
typedef struct 
{
    int day, month, year;
} birthdate;

typedef struct
{
    char lastName[20];
    char firstName[20];
} name  ;

typedef struct
{
    // student's id
    char id[20];
    
    // student's full name
    name fullName;
    
    // student birthdate
    birthdate birthDay;

    // overall grades of three subjects: Algebra, Calculus, Basic Programming respectively
    float grade[3];

    // function to calculate the gpa
} student;

#endif
