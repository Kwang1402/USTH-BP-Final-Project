// funtion to calculate the gpa
float gpa(student thisStudent) {
    return (thisStudent.grade[0] + thisStudent.grade[1] + thisStudent.grade[2])/3;
}

// finding the students with highest GPA 
// 5th task
void highestGPA(student *students, int numberOfStudent) {
    
    // the highest GPA is set to 0.0, the lowest possible
    float highest = 0.0;
    
    // list of indices of students with highest GPA
    int list[1003];
    // counting the number of students with highest GPA
    int cnt = 0;

    for(int i = 1; i <= numberOfStudent; ++i) {
        
        if(highest == gpa(students[i])) {
            list[++cnt] = i;
        }

        if(highest < gpa(students[i])) {
            highest = gpa(students[i]);
            cnt = 0;
            list[++cnt] = i;
        }
    }
    // print the list
    printf("\nList of highest GPA students:\n");
    printf("\nStudent ID \tLast Name \tFirst Name \t\tGPA\n");

    for(int k = 1; k <= cnt; ++k){
        int i = list[k];
        printf("\n%-10s \t%-10s \t%-20s \t%.2f \n",students[i].id,students[i].fullName.lastName, students[i].fullName.firstName,gpa(students[i]));
    }
}
// finding the students with lowest GPA
// 5th task
void lowestGPA(student *students, int numberOfStudent) {
    
    // the lowest GPA is set to 20.0, the highest possible
    float lowest = 20.0;
    
    // list of indices of students with lowest GPA
    int list[1003];
    // counting the number of students with lowest GPA
    int cnt = 0;

    for(int i = 1; i <= numberOfStudent; ++i) {
        
        if(lowest == gpa(students[i])) {
            list[++cnt] = i;
        }

        if(lowest > gpa(students[i])) {
            lowest = gpa(students[i]);
            cnt = 0;
            list[++cnt] = i;
        }
    }
    // print the list
    printf("\nList of lowest GPA students:\n");
    printf("\nStudent ID \tLast Name \tFirst Name \t\tGPA\n");

    for(int k = 1; k <= cnt; ++k){
        int i = list[k];
        printf("\n%-10s \t%-10s \t%-20s \t%.2f \n",students[i].id,students[i].fullName.lastName, students[i].fullName.firstName,gpa(students[i]));
    }
}
// finding the students with highest BP grade
// 5th task
void highestBP(student *students, int numberOfStudent) {
    
    // the highest BP grade is set to 0.0, the lowest possible
    float highest = 0.0;
    // list of indices of students with highest BP grade
    int list[1003];
    // counting the number of students with highest BP grade
    int cnt = 0;

    for(int i = 1; i <= numberOfStudent; ++i) {
        
        if(highest == students[i].grade[2]) {
            list[++cnt] = i;
        }

        if(highest < students[i].grade[2]) {
            highest = students[i].grade[2];
            cnt = 0;
            list[++cnt] = i;
        }
    }
    // print the list
    printf("\nList of highest BP grade students:\n");
    printf("\nStudent ID \tLast Name \tFirst Name \t\tBP\n");

    for(int k = 1; k <= cnt; ++k){
        int i = list[k];
        printf("\n%-10s \t%-10s \t%-20s \t%.2f \n",students[i].id,students[i].fullName.lastName, students[i].fullName.firstName,students[i].grade[2]);
    }
}