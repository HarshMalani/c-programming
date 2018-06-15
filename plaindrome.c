#include<stdio.h>
#include<string.h>
int main(){
 int operation, n, rInteger = 0, remain, oInteger,flag = 0,i,length;
 char string[20];

    printf("Enter 1. Integer and 2. String");
    scanf("%d", &operation);

  switch(operation)
  {
   case 1 : // it is for checking whether an given integer is plaindrome or not
      {
        printf("Enter an integer: ");
        scanf("%d", &n);

        oInteger = n;

        // reversed integer is stored in variable
        while( n!=0 )
        {
            remain= n%10;
            rInteger = rInteger*10 + remain;
            n /= 10;
        }

        // palindrome if oInteger and rInteger are equal
        if (oInteger == rInteger)
            printf("%d is a palindrome.", oInteger);
        else
            printf("%d is not a palindrome.", oInteger);
        break;
      }
  case 2: // this case is to check whether the give string is pllaindrome or not
      {

        printf("Enter a string:");
        scanf("%s", string);

        length = strlen(string);

        for(i=0;i < length ;i++){
            if(string[i] != string[length-i-1]){
             flag = 1;
       }
    }

        if (flag) {
            printf("%s is not a palindrome", string);
        }
        else {
            printf("%s is a palindrome", string);
        }
        break ;
      }
    case 3: // wrong input
   default:
    printf("wrong choice:");
  }
}


