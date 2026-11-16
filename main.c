
#include <stdio.h>

int addToRunningTotal(int newValue)
{
    static int accumulatedSum = 0;

    accumulatedSum += newValue;
    return accumulatedSum;
}

int main(void)
{
    int inputNumber;
    int result = 0;

    scanf("%d", &inputNumber);

    if (inputNumber < 1 || inputNumber > 10)
    {
        printf("NG");
        return 0;
    }

    for (int counter = 1; counter <= inputNumber; counter++)
    {
        result = addToRunningTotal(counter * 2);
    }

    printf("%d", result);
    return 0;
}
