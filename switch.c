#include<stdio.h>
int main(){
    int operation;
  int n;
  char str[20];
  printf("enter the 2 input:");
  scanf("%d%d",&n,&str);
  printf("please choose what type of values u need:");
  printf("1- integer ");
  printf("2- string");
  switch(operation)

   case 1 :

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

   break;

   case 2 :

       char string[20];
    int i, length;
    int flag = 0;

    printf("Enter a string:");
    scanf("%s", string);

    length = strlen(string);

    for(i=0;i < length ;i++){
        if(string[i] != string[length-i-1]){
            flag = 1;
            break;
   }
}

    if (flag) {
        printf("%s is not a palindrome", string);
    }
    else {
        printf("%s is a palindrome", string);
    }
    return 0;
    break;

   default:
    printf("wrong choice:")
    }

