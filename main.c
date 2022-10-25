#include <stdio.h>

int main(void) {
  char operator;
  double num1;
  double num2;
  double result;
  printf("enter an operator\n");
  scanf("%c", &operator);

  printf("enter number 1:  ");
  scanf("%lf", &num1);

  printf("enter number 2:  ");
  scanf("%lf", &num2);

  switch (operator){
    case '/':
      result=num1/num2;
      printf("result:%lf",result);
      break;
    
    case'*':
      result=num1*num2;
      printf("result:%lf",result);
      break;
    case'-':
     result=num1-num2;
     printf("result:%lf",result); 
     break;
    
    case'+':
     result=num1+num2;
     printf("result:%lf",result);
  default:
  printf("%c is not avaible", operator);

  return 0;
    }
}