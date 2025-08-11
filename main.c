#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    // VARIABLES

    // double pi = 3.141592;

    // printf("The value of pi is %lf",pi);

    // float gpa = 2.5;
    // float price = 19.99;
    // float temperature = -10.1;

    // printf("Your gpa is %f\n", gpa);
    // printf("The price is $%f\n",price);
    // printf("The temperature is %.f degree\n",temperature);

    // int age = 10;
    // int year = 2025;
    // int quantity = 1;

    // printf("You are %d years old\n", age);
    // printf("The year is %d\n", year);
    // printf("You have ordered %d x items\n",quantity);

    // my first c program! :)
    // printf("Hello c++\n");
    // printf("It's really good");

    // char name[] = "Daniel";
    // char food[] = "Pizza";

    // // char name = 'x';

    // printf("Hello %s\n", name);
    // printf("Your favorite food is %s\n", food);

    // bool isOnline = 0;

    // // printf("This user is %d", isOnline);

    // if (isOnline)
    // {
    //     printf("This user is online");
    // }
    // else
    // {
    //     printf("This user is offline");
    // }

    // FORMAT SPECIFIERS

    // int age = 22;           // integers
    // float price = 19.99;    // float
    // double pi = 3.142;      // double
    // char currency = '$';    // characters
    // char name[] = "Daniel"; // array of characters -- string

    // printf("%d", age);
    // printf("%f\n", price);
    // printf("%lf\n", pi);
    // printf("%c\n", currency);
    // printf("%s\n", name);

    // width

    // int num1 = 1;
    // int num2 = 10;
    // int num3 = 100;

    // printf("%3d\n", num1);
    // printf("%3d\n", num2);
    // printf("%3d\n", num3);

    // precision

    // float price1 = 19.99;
    // float price2 = 1.50;
    // float price3 = -1.30;

    // printf("%.1f\n", price1);
    // printf("%.2f\n", price2);
    // printf("%.2f\n", price3);

    // int x = 10;
    // int y = 2;
    // int z = 0;

    // // z = x + y;
    // // z = x - y;
    // // z = x * y;

    // // z = x / y;

    // x = x + 2;

    // printf("%d", x);

    // printf("Hello");

    // int age = 0;
    // float gpa = 0.0f;
    // char grade = '\0';
    // char name[30] = "";

    // printf("Enter your age? ");
    // scanf("%d", &age);

    // printf("Enter your GPA? ");
    // scanf("%f", &gpa);

    // printf("Enter your grade? ");
    // scanf(" %c", &grade);

    // getchar();
    // printf("Enter your first name");
    // fgets(name, sizeof(name), stdin);
    // name[strlen(name) - 1] = '\0';

    // printf("%d\n", age);
    // printf("%.2f\n", gpa);
    // printf("%c\n", grade);

    // SHOPPING CART PROGRAM

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each? ");
    scanf("%f", &price);

    printf("how many would you like? ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s\n", quantity, item);
    printf("%c%.2f\n", currency, total);

    return 0;
}