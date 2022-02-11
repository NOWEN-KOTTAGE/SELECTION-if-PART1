#include<stdio.h>
int main(void)
{
  int type;
  float salesAmt,comm = 0;

  printf("Enter sales representative type:");
  scanf("%d",&type);

  printf("Enter monthly sales amount:");
  scanf("%f",&salesAmt);

  if (type==1||type==2){
    if(salesAmt>500000.00){
      comm=salesAmt*105/100;
      printf("The commission is %f",comm);
    }
  }
  else {
    printf("Sorry!! You are not eligible for a commission");
  }
  return 0;
}