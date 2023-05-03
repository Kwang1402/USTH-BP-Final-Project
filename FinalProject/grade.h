// funtion to calculate the gpa
float gpa(student thisStudent) {
    return (thisStudent.grade[0] + thisStudent.grade[1] + thisStudent.grade[2])/3;
}

// finding the students with highest GPA 
void highestGPA(student *students, int numberOfStudent) {
    
    float highest = 0.0;
    
    int list[1003];
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

    printf("\nList of highest GPA students:\n");
    printf("\nStudent ID \tLast Name \tFirst Name \tGPA\n");

    for(int k = 1; k <= cnt; ++k){
        int i = list[k];
        printf("\n%-10s \t%-10s \t%-10s \t%.2f \n",students[i].id,students[i].fullName.lastName, students[i].fullName.firstName,gpa(students[i]));
    }
}
// finding the students with lowest GPA
void lowestGPA(student *students, int numberOfStudent) {
    
    float lowest = 20.0;
    
    int list[1003];
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

    printf("\nList of lowest GPA students:\n");
    printf("\nStudent ID \tLast Name \tFirst Name \tGPA\n");

    for(int k = 1; k <= cnt; ++k){
        int i = list[k];
        printf("\n%-10s \t%-10s \t%-10s \t%.2f \n",students[i].id,students[i].fullName.lastName, students[i].fullName.firstName,gpa(students[i]));
    }
}
// finding the students with highest BP grade
void highestBP(student *students, int numberOfStudent) {
    
    float highest = 0.0;
    
    int list[1003];
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

    printf("\nList of highest BP grade students:\n");
    printf("\nStudent ID \tLast Name \tFirst Name \tBP\n");

    for(int k = 1; k <= cnt; ++k){
        int i = list[k];
        printf("\n%-10s \t%-10s \t%-10s \t%.2f \n",students[i].id,students[i].fullName.lastName, students[i].fullName.firstName,students[i].grade[2]);
    }
}