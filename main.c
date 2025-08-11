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

    // char item[50] = "";
    // float price = 0.0f;
    // int quantity = 0;
    // char currency = '$';
    // float total = 0.0f;

    // printf("What item would you like to buy?: ");
    // fgets(item, sizeof(item), stdin);
    // item[strlen(item) - 1] = '\0';

    // printf("What is the price for each? ");
    // scanf("%f", &price);

    // printf("how many would you like? ");
    // scanf("%d", &quantity);

    // total = price * quantity;

    // printf("\nYou have bought %d %s\n", quantity, item);
    // printf("%c%.2f\n", currency, total);

    // MAD LIBS GAME

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    // printf("%s\n", noun);
    // printf("%s\n", verb);
    // printf("%s\n", adjective1);
    // printf("%s\n", adjective2);
    // printf("%s\n", adjective3);

    printf("\nToday I went to a %s zoo.\n", adjective1);
    printf("In an exhibit, i saw a %s\n", noun);
    printf("%s was %s and %s!\n", noun, adjective2, verb);
    printf("I was %s!\n", adjective3);

    return 0;
}