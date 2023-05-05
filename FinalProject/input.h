void input(student *students, int *n) {
    
    int numberOfStudents;
    printf("Enter the number of students: ");
    printf("\n");
    // enter student number
    // 1st task
    scanf("%d", &numberOfStudents);
    while (!isValidNumberOfStudents(numberOfStudents)) 
    {
        scanf("%d", &numberOfStudents);
    }
    
    *n = numberOfStudents;
    
    // enter students' information
    // 2nd task
    for(int i = 1; i <= *n; ++i) {
        // scannning the information of student #i
        printf("Enter the information of student #%d\n", i);

        // ID
        printf("ID: ");
        scanf("%s", students[i].id);
        printf("\n");
        while (isDuplicateID(students, i))
        {
            scanf("%s", students[i].id);
        }
        
        // Fullname
        printf("Fullname: ");
        scanf(" %[^\n]s", students[i].fullName.full);
        printf("\n");

        // Birthdate
        printf("Birthdate in the format date month year: ");
        scanf("%d%d%d", &students[i].birthDay.day, &students[i].birthDay.month, &students[i].birthDay.year);
        printf("\n");
        while(!isValidBirthdate(students[i].birthDay)) {
            scanf("%d%d%d", &students[i].birthDay.day, &students[i].birthDay.month, &students[i].birthDay.year);
        }

        // Algebra, Calculus, BP grade
        printf("Algebra, Calculus, BP grade, separated by a space: ");
        scanf("%f%f%f", &students[i].grade[0], &students[i].grade[1], &students[i].grade[2]);

        while (!isValidGrade(students[i].grade))
        {
            scanf("%f%f%f", &students[i].grade[0], &students[i].grade[1], &students[i].grade[2]);
        }
        
        printf("\n");
    }
}
