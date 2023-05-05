void table(FILE *fp, student *students, int n) {
    for(int i = 1; i <= 126; ++i) fprintf(fp, "*");
    fprintf(fp, "\n");

    for(int i = 1; i <= 57; ++i) fprintf(fp, " ");
    fprintf(fp, "STUDENT LIST");
    for(int i = 1; i <= 57; ++i) fprintf(fp, " ");
    fprintf(fp, "\n");
    
    for(int i = 1; i <= 126; ++i) fprintf(fp, "*");
    fprintf(fp, "\n");
    
    fprintf(fp, "\nStudent ID \tLast Name \tFirst Name \t\tBirthdate \tAlgebra \tCalculus \tBP \t\tGPA\n");

    for(int i = 1; i <= n; ++i){
        fprintf(fp, "\n%-10s \t%-10s \t%-20s \t%d/%d/%d \t%-10.2f \t%-10.2f \t%-10.2f \t%-10.2f \n",students[i].id,students[i].fullName.lastName, students[i].fullName.firstName,students[i].birthDay.day, students[i].birthDay.month,students[i].birthDay.year,students[i].grade[0], students[i].grade[1], students[i].grade[2],gpa(students[i]));
    }

    fprintf(fp, "\n");
    for(int i = 1; i <= 126; ++i) fprintf(fp, "*");
    fprintf(fp, "\n");
}

void output(student *students, int n) {
    
    nameSplit(students, n);

    FILE *fp = fopen("StudentList.txt", "w+");
    table(fp, students, n);
    fclose(fp);
    FILE *fpt= fopen("StudentList.txt", "r+");
    if (fpt != NULL){
        char c;
        while ((c = fgetc(fp)) != EOF )
            putchar(c);
    }
    else {
        printf("Error opening file.\n");
        return;
    }
    fclose(fpt);

    highestGPA(students, n);
    lowestGPA(students, n);
    highestBP(students, n);
    findOldest(students, n);
    findYoungest(students, n);
}