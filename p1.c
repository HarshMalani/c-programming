#include <stdio.h>
int main()
{
    int n, rInteger = 0, remain, oInteger; // initalization

    printf("Enter an integer: ");
    scanf("%d", &n);

    oInteger = n; // original interger is same as n

    // reversed integer is stored in variable
    while( n!=0 )
    {
        remain= n%10; // moduluing give interger by 10 and storing it in remain
        rInteger = rInteger*10 + remain; // intput no to be reversed and multiplled by 10 and adding it to remainder
        n /= 10; // finally divide it by n and the main logic is in these 3 lines
    }

    // palindrome if oInteger and rInteger are equal
    if (oInteger == rInteger) // orginal input and reversed input no if same then
        printf("%d is a palindrome.", oInteger);
    else
        printf("%d is not a palindrome.", oInteger);

    return 0;
}
