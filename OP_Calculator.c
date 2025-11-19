#include <stdio.h>

int main(){

   double num1, num2, answer;
   char operator;

   printf("Enter first number: ");
   scanf("%lf", &num1);
   printf("Enter operator (+,-,*,/): ");
   scanf(" %c", &operator);
   printf("Enter second number: ");
   scanf("%lf", &num2);

   if (operator == '+'){
    answer = num1 + num2;
    printf("The answer is %.2lf", answer);
   } else if (operator == '-'){
    answer = num1 - num2;
    printf("The answer is %.2lf", answer);
   } else if (operator == '/'){
    if (num2 == 0){
        printf("Cannot divided by 0.");
    } else {
        answer = num1 / num2;
        printf("The answer is %.2lf", answer);
    }
   } else if (operator == '*'){
    answer = num1 * num2;
    printf("The answer is %.2lf", answer);
   } else {
    printf("Error: Invalid operator entered.");
   }

    return 0;
}
