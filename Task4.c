int main() {
    float basic_salary, hra, da, gross_salary;
    
    // Input basic salary
    printf("Enter the employee's basic salary: ");
    scanf("%f", &basic_salary);
    
    // Calculate HRA (10% of basic salary)
    hra = basic_salary * 0.10;
    
    // Calculate DA (5% of basic salary)
    da = basic_salary * 0.05;
    
    // Calculate Gross Salary
    gross_salary = basic_salary + hra + da;
    
    // Display the results
    printf("\n--- Salary Breakdown ---\n");
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("HRA (10%%): %.2f\n", hra);
    printf("DA (5%%): %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross_salary);
    
    return 0;
}
