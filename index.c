#include <stdio.h>
int main()
{
    char Operator;
    float num1, num2, result = 0;
    printf("\nEnter any one operator like +, -, *, / : ");
    scanf("%c", &Operator);
    printf("\nEnter the values of Operands num1 and num2: ");
    scanf("%f%f", &num1, &num2);
    switch (Operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        printf("\nInvalid Operator");
    }
    printf("The value = %.0f", result);//If you want result in decimals like 24.0000 then remove .0
    return 0;
}
