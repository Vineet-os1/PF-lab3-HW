#include <stdio.h>

int main() {
    int ascii_value;
    
    // Input integer value
    printf("Enter an integer (between 65 and 90): ");
    scanf("%d", &ascii_value);
    
    // Check if the input is within the valid range
    if (ascii_value >= 65 && ascii_value <= 90) {
        // Display the integer and its corresponding ASCII character
        printf("Output → %d = %c\n", ascii_value, (char)ascii_value);
    } else {
        printf("Error: Please enter a value between 65 and 90.\n");
        printf("Valid range corresponds to uppercase letters A-Z.\n");
    }
    
    return 0;
}
