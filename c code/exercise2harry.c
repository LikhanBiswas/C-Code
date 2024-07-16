#include <stdio.h>
int main()
{
    /* code */
    int n;
    printf(" kms to miles, press 1\n");
    printf("inches to foot, press 2\n");
    printf("cm to inches, press 3\n");
    printf("pound to kgs, press 4\n"),
        printf("inches to meter, press 5");

    printf("Enter your desired coversion method :");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        /* code */
        // kms to mils
        printf("Enter your number of kms:");
        int km;
        float miles;
        scanf("%d", &km);
        miles = km * 0.6213711922;
        printf(" %d km equals to: %f miles", km, miles);
        break;
    case 2:
        /* code */
        // inches to foot
        printf("Enter your number of inches:");
        float inches;
        float foots;
        scanf("%f", &inches);
        foots = inches / 12;
        printf(" %f inches equals to: %f foots", inches, foots);
        break;
    default:
        printf("sorry this conversion is not available");
    }
    return 0;
}
