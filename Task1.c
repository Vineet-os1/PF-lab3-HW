#include <stdio.h>

int main() {
    int subject1, subject2, subject3;
    int total;
    float percentage;
    
    // Input three subject marks
    printf("Enter marks for Subject 1: ");
    scanf("%d", &subject1);
    
    printf("Enter marks for Subject 2: ");
    scanf("%d", &subject2);
    
    printf("Enter marks for Subject 3: ");
    scanf("%d", &subject3);
    
    // Calculate total marks
    total = subject1 + subject2 + subject3;
    
    // Calculate percentage out of 300
    percentage = (float)total / 300 * 100;
    
    // Display results
    printf("\n--- Results ---\n");
    printf("Subject 1 Marks: %d\n", subject1);
    printf("Subject 2 Marks: %d\n", subject2);
    printf("Subject 3 Marks: %d\n", subject3);
    printf("Total Marks: %d out of 300\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    
    return 0;
}
