#include<stdio.h>
#include<math.h>
float add(float a, float b){
    return a+b;
}
float subtract(float a, float b){
    return a - b;
}
float multiply(float a, float b){
    return a*b;
}
float divide(float a, float b){
    return a/b;
}
int modulus(int a, int b){
    return a%b;
}
double power(double a, double b){
    return pow(a, b);
}
double squareRoot(double n){
    return sqrt(n);
}
int main(){
    int choice;
    float num1, num2, result;
    do{
        printf("\n ==== CALCULATOR ====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Square root\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice>=1 && choice<=6){
            printf("Enter first number: ");
            scanf("%f", &num1);

            printf("Enter second number: ");
            scanf("%f", &num2);
        }else if(choice == 7){
            printf("enteer a num: ");
            scanf("%f", &num1);
        }
        switch(choice){
            case 1:
                result=add(num1, num2);
                printf("Result = %.2f\n", result);
                break;
            case 2:
                result=subtract(num1, num2);
                printf("Result = %.2f", result);
                break;
            case 3:
                result=multiply(num1, num2);
                printf("Result=%.2f\n", result);
                break;
            case 4:
                if(num2!=0){
                    result=divide(num1, num2);
                    printf("Result = %.2f\n", result);
                }else{
                    printf("Division by zero is not allowed!\n");
                }
                break;
            case 5:
                result=modulus(num1, num2);
                printf("Result = %d\n", modulus((int)num1, (int)num2));
                break;
            case 6:
                result=power(num1, num2);
                printf("Result = %.2f\n", result);
                break;
            case 7:
                if(num1>=0){
                    printf("Result = %.2f\n", squareRoot(num1));
                }else{
                    printf("Square root is a negative number is not allowed\n");
                }
                break;
            case 8:
                printf("Thank you for using Calculator!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        } 
    }while(choice!=6);

    return 0;
}