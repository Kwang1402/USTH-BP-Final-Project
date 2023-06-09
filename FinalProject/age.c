#include <stdio.h>
#include <stdbool.h>
#include "student.h"

// function to compare the birhtdate of 2 student
bool isOlder(birthdate birthdate_1, birthdate birthdate_2) {
    
    // comparing birth year
    if(birthdate_1.year < birthdate_2.year) {
        return true;
    }
    if(birthdate_1.year > birthdate_2.year) {
        return false;
    }

    // comparing birth month
    if(birthdate_1.month < birthdate_2.month) {
        return true;
    }
    if(birthdate_1.month > birthdate_2.month) {
        return false;
    }

    // comparing birth date
    if(birthdate_1.day < birthdate_2.day) {
        return true;
    }
    if(birthdate_1.day > birthdate_2.day) {
        return false;
    }

    // if the 2 students have the same birthdate then no one is older
    return false;
}

// function to check if 2 students have the same birthdate
bool isSameBirthdate(birthdate birthdate_1, birthdate birthdate_2) {
    return (birthdate_1.day == birthdate_2.day &&
            birthdate_1.month == birthdate_2.month &&
            birthdate_1.year == birthdate_2.year);
}

// finding the youngest student
// task 8
void findYoungest(student *students, int numberOfStudent) {
    
    // the birthdate of the youngest student is set to 0/0/0, the earliest possible date
    birthdate youngestStudent = {0,0,0};
    // list of indices of youngest students
    int list[1003];
    // counting the number of youngest students
    int cnt = 0;

    for(int i = 1; i <= numberOfStudent; ++i) {
        
        if(isSameBirthdate(youngestStudent, students[i].birthDay)) {
            list[++cnt] = i;
        }

        if(isOlder(youngestStudent, students[i].birthDay)) {
            youngestStudent = students[i].birthDay;
            cnt = 0;
            list[++cnt] = i;
        }
    }
    
    // print the list
    printf("\nList of youngest students:\n");
    printf("\nStudent ID \tLast Name \tFirst Name \t\tBirthdate\n");

    for(int k = 1; k <= cnt; ++k){
        int i = list[k];
        printf("\n%-10s \t%-10s \t%-20s \t%d/%d/%d \n",students[i].id,students[i].fullName.lastName, students[i].fullName.firstName,students[i].birthDay.day, students[i].birthDay.month,students[i].birthDay.year);
    }
}

// finding the oldest student
// task 7
void findOldest(student *students, int numberOfStudent) {

    // the birthdate of the oldest student is set to 32/13/9999, the lastest possible date
    birthdate oldestStudent = {32,13,9999};
    // list of indices of oldest students
    int list[1003];
    // counting the number of oldest students
    int cnt = 0;

    for(int i = 1; i <= numberOfStudent; ++i) {
        
        if(isSameBirthdate(oldestStudent, students[i].birthDay)) {
            list[++cnt] = i;
        }

        if(isOlder(students[i].birthDay,oldestStudent)) {
            oldestStudent = students[i].birthDay;
            cnt = 0;
            list[++cnt] = i;
        }
    }

    // print the list
    printf("\nList of oldest students:\n");
    printf("\nStudent ID \tLast Name \tFirst Name \t\tBirthdate\n");

    for(int k = 1; k <= cnt; ++k){
        int i = list[k];
        printf("\n%-10s \t%-10s \t%-20s \t%d/%d/%d \n",students[i].id,students[i].fullName.lastName, students[i].fullName.firstName,students[i].birthDay.day, students[i].birthDay.month,students[i].birthDay.year);
    }
}