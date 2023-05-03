void input(student *students, int *n) {
    
    int numberOfStudents;
    printf("Enter the number of students: ");
    printf("\n");
    scanf("%d", &numberOfStudents);
    while (!isValidNumberOfStudents(numberOfStudents)) 
    {
        scanf("%d", &numberOfStudents);
    }
    
    *n = numberOfStudents;

    for(int i = 1; i <= *n; ++i) {
        printf("Enter the information of student #%d\n", i);

        printf("ID: ");
        scanf("%s", students[i].id);
        printf("\n");
        while (isDuplicateID(students, i))
        {
            scanf("%s", students[i].id);
        }
        

        printf("Fullname, last name and first name, separated by a space: ");
        scanf("%s%s", students[i].fullName.lastName, students[i].fullName.firstName);
        printf("\n");

        printf("Birthdate in the format date month year: ");
        scanf("%d%d%d", &students[i].birthDay.day, &students[i].birthDay.month, &students[i].birthDay.year);
        printf("\n");
        while(!isValidBirthdate(students[i].birthDay)) {
            scanf("%d%d%d", &students[i].birthDay.day, &students[i].birthDay.month, &students[i].birthDay.year);
        }

        printf("Algebra, Calculus, BP grade, separated by a space: ");
        scanf("%f%f%f", &students[i].grade[0], &students[i].grade[1], &students[i].grade[2]);

        while (!isValidGrade(students[i].grade))
        {
            scanf("%f%f%f", &students[i].grade[0], &students[i].grade[1], &students[i].grade[2]);
        }
        
        printf("\n");
    }
}
