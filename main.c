 #include <stdio.h>

int main() {
    int students, grades;
    int passed = 0, failed = 0;
    int total = 0;
    int i;
    float average;

    printf("PERFORMANCE OF STUDENTS\n");
    printf("====================\n");

    printf("Enter Number of Students: ");
    scanf("%d", &students);

    if (students <= 0) {
        printf("Invalid Number of Students!\n");
        return 0;
    }

    for (i = 1; i <= students; i++) {
        printf("\nEnter Grade of Student %d (0-100): ", i);
        scanf("%d", &grades);

        if (grades < 0 || grades > 100) {
            printf("Invalid Grade! Please enter a grade from 0 to 100.\n");
            i--;
            continue;
        } else {
            total += grades;

            if (grades >= 75) {
                printf("Result: PASSED\n");
                passed++;
            } else {
                printf("Result: FAILED\n");
                failed++;
            }
        }
    }

    average = (float) total / students;

    printf("\n====================\n");
    printf("FINAL SUMMARY\n");
    printf("====================\n");
    printf("Total Students: %d\n", students);
    printf("Passing Students: %d\n", passed);
    printf("Failing Students: %d\n", failed);
    printf("Class Average: %.2f\n", average);

    return 0;
}
