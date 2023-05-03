//checking if the number of students is correct
bool isValidNumberOfStudents(int n) 
{
    if(n <= 0) {
        printf("The number of students must be greater than zero! Please try again:\n");
        return false;
    }
    if(n > 1000) {
        printf("The number of students is too large! The maximum is 1000. Please try again: \n");
        return false;
    }
    return true;
}

//checking if the ID is duplicated
bool isDuplicateID(student *students, int n) {
    for (int i = 1; i < n; ++i) {
        if (strcmp(students[i].id, students[n].id) == 0) {
            printf("This ID already exists! Please try again:\n");
            return true;
        }
    }
    return false;
}

//checking leap year
bool isLeapYear(int year) {
    if(year % 4 || (year % 100 == 0 && year % 400)) {
        return false;
    }
    return true;
}

const int numberOfdays[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
// checking if the birthdate is valid
bool isValidBirthdate(birthdate date) {
    if(date.day > numberOfdays[date.month] || date.day < 0 || date.month < 1 || date.month > 12 || date.year < 0) {
        printf("Invalid birtdate. Please try again:\n");
        return false;
    }
    if(!isLeapYear(date.year) && date.month == 2 && date.day > 28) {
        printf("Invalid birtdate. Please try again:\n");
        return false;
    }    
    return true;
}

// checking if grades are valid
bool isValidGrade(float grade[]) {
    for (int i = 0; i < 3; ++i) {
        if (grade[i] < 0 || grade[i] > 20) {
            printf("Invalid grades. Grades should range from 0 to 20. Please try again:\n");
            return false;
        }
    }
    return true;
}
