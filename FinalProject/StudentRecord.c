#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "student.h"
#include "validate.h"
#include "input.h"
#include "name.h"
#include "grade.h"
#include "age.h"
#include "output.h"

int n;
student students[1003];
int main()
{
    input(students, &n);
    output(students, n);
    return 0;
}


