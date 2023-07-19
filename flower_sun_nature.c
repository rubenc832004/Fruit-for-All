#include <stdio.h>

/* This program prints out a message 
   for everyone who likes fruit! */

int main()
{
    printf("Fruit for All!\n");

    int apples = 2;
    int oranges = 5;
    int bananas = 9;
    int totalFruit = apples + oranges + bananas;

    printf("I have %d apples\n", apples);
    printf("I have %d oranges\n", oranges);
    printf("I have %d bananas\n", bananas);
    printf("Altogether I have %d pieces of fruit\n", totalFruit);

    // Let's eat some fruit
    apples = apples - 1;
    oranges = oranges - 2;
    bananas = bananas - 3;

    printf("Now I have %d apples\n", apples);
    printf("Now I have %d oranges\n", oranges);
    printf("Now I have %d bananas\n", bananas);

    // Time to get more fruit
    apples += 5;
    oranges += 10;
    bananas += 15;

    printf("After shopping I have %d apples\n", apples);
    printf("After shopping I have %d oranges\n", oranges);
    printf("After shopping I have %d bananas\n", bananas);

    totalFruit = apples + oranges + bananas;
    printf("Altogether I have %d pieces of fruit\n", totalFruit);

    // Let's eat some more fruit
    apples = apples - 3;
    oranges = oranges - 4;
    bananas = bananas - 5;

    printf("Now I have %d apples\n", apples);
    printf("Now I have %d oranges\n", oranges);
    printf("Now I have %d bananas\n", bananas);

    // Oh no, I dropped some fruit!
    apples -= 2;
    oranges -= 2;
    bananas -= 5;

    printf("After dropping some fruit I have %d apples\n", apples);
    printf("After dropping some fruit I have %d oranges\n", oranges);
    printf("After dropping some fruit I have %d bananas\n", bananas);

    totalFruit = apples + oranges + bananas;
    printf("Altogether I have %d pieces of fruit\n", totalFruit);

    // Let's go to the store to get more fruit!
    apples += 2;
    oranges += 3;
    bananas += 5;

    printf("After shopping I have %d apples\n", apples);
    printf("After shopping I have %d oranges\n", oranges);
    printf("After shopping I have %d bananas\n", bananas);

    totalFruit = apples + oranges + bananas;
    printf("Altogether I have %d pieces of fruit\n", totalFruit);

    // Let's compare the current amount of fruit
    int applesBefore = apples - 5;
    int orangesBefore = oranges - 8;
    int bananasBefore = bananas - 10;

    printf("Before I had %d apples\n", applesBefore);
    printf("Before I had %d oranges\n", orangesBefore);
    printf("Before I had %d bananas\n", bananasBefore);

    int applesDifference = apples - applesBefore;
    int orangesDifference = oranges - orangesBefore;
    int bananasDifference = bananas - bananasBefore;

    printf("The difference in apples is %d\n", applesDifference);
    printf("The difference in oranges is %d\n", orangesDifference);
    printf("The difference in bananas is %d\n", bananasDifference);

    // Now let's figure out how much more fruit we have
    apples += applesDifference;
    oranges += orangesDifference;
    bananas += bananasDifference;

    printf("Now I have %d apples\n", apples);
    printf("Now I have %d oranges\n", oranges);
    printf("Now I have %d bananas\n", bananas);

    totalFruit = apples + oranges + bananas;
    printf("Altogether I have %d pieces of fruit\n", totalFruit);

    // Let's go to the store to get more fruit!
    apples += 2;
    oranges += 3;
    bananas += 5;

    printf("After shopping I have %d apples\n", apples);
    printf("After shopping I have %d oranges\n", oranges);
    printf("After shopping I have %d bananas\n", bananas);

    totalFruit = apples + oranges + bananas;
    printf("Altogether I have %d pieces of fruit\n", totalFruit);

    // Let's compare the current amount of fruit again
    applesBefore = apples - 5;
    orangesBefore = oranges - 8;
    bananasBefore = bananas - 10;

    printf("Before I had %d apples\n", applesBefore);
    printf("Before I had %d oranges\n", orangesBefore);
    printf("Before I had %d bananas\n", bananasBefore);

    applesDifference = apples - applesBefore;
    orangesDifference = oranges - orangesBefore;
    bananasDifference = bananas - bananasBefore;

    printf("The difference in apples is %d\n", applesDifference);
    printf("The difference in oranges is %d\n", orangesDifference);
    printf("The difference in bananas is %d\n", bananasDifference);

    // Now let's figure out how much more fruit we have
    apples += applesDifference;
    oranges += orangesDifference;
    bananas += bananasDifference;

    printf("Now I have %d apples\n", apples);
    printf("Now I have %d oranges\n", oranges);
    printf("Now I have %d bananas\n", bananas);

    totalFruit = apples + oranges + bananas;
    printf("Altogether I have %d pieces of fruit\n", totalFruit);

    // Let's split the fruit
    int applesForEach = apples / 3;
    int orangesForEach = oranges / 3;
    int bananasForEach = bananas / 3;

    apples = apples - applesForEach;
    oranges = oranges - orangesForEach;
    bananas = bananas - bananasForEach;

    printf("After splitting I have %d apples\n", apples);
    printf("After splitting I have %d oranges\n", oranges);
    printf("After splitting I have %d bananas\n", bananas);

    printf("We each get %d apples\n", applesForEach);
    printf("We each get %d oranges\n", orangesForEach);
    printf("We each get %d bananas\n", bananasForEach);

    totalFruit = apples + oranges + bananas;
    printf("Altogether I have %d pieces of fruit\n", totalFruit);

    // Let's finish up
    printf("Fruit for All!\n");

    return 0;
}