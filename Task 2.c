#include <stdio.h>

int main() {
    int a, b, temp;
    
    // Input two integer values
    printf("Enter value for a: ");
    scanf("%d", &a);
    
    printf("Enter value for b: ");
    scanf("%d", &b);
    
    // Display values before swapping
    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);
    
    // Swap the values using a temporary variable
    temp = a;
    a = b;
    b = temp;
    
    // Display values after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}
