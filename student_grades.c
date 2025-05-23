#include <stdio.h>

// Function to calculate total marks
float calculateTotal(float marks[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        total += marks[i];
    }
    return total;
}

// Function to calculate average marks
float calculateAverage(float total, int size) {
    return total / size;
}

// Function to determine grade
char determineGrade(float average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

int main() {
    const int NUM_SUBJECTS = 5;
    float marks[NUM_SUBJECTS];
    
    // Input marks for each subject
    printf("Enter marks for 5 subjects (out of 100):\n");
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        
        // Validate marks
        while (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Please enter marks between 0 and 100: ");
            scanf("%f", &marks[i]);
        }
    }
    
    // Calculate total and average
    float total = calculateTotal(marks, NUM_SUBJECTS);
    float average = calculateAverage(total, NUM_SUBJECTS);
    char grade = determineGrade(average);
    
    // Display results
    printf("\nResults:\n");
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);
    
    return 0;
} 
