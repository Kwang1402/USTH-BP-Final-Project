// function to split students[i].fullName.full into students[i].lastName and students[i].firstName
void nameSplit(student *students, int n) {
    for(int i = 1 ; i <= n; ++i) {
        int len = strlen(students[i].fullName.full);
        for(int j = len - 1; j >= 0; --j) {
            if(students[i].fullName.full[j] == ' ') {
                strncpy(students[i].fullName.firstName,students[i].fullName.full,j);
                strncpy(students[i].fullName.lastName,students[i].fullName.full+j+1,len-j-1);
                break;
            }
        }
    }
}