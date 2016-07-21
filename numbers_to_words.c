/*        ***Convert Digits to words***
*The digits are treated as characters in an array
*The length of the number(number of digits entered is determined
*The length is used to know wether the number is a unit, ten, thousand....
*The SWITCH CASE is used to define basic principles of counting...
*/
/* *Author:Fon E. Noel Nfebe 
   *Version:1.0
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
//Function responsible for units(1-9)
//It takes parameter of array index(Location)
int  A(int a);
//Function responsible for tens from(10-19)
//Parameter array index
int B(int b);
//Function responsible for tens and hundreds(20-999)
//Two parameters, c for hundred and d for tens. 
int C(int c,int d);
//Global variables
char number[20], a; 
int i, lenght;
int main(){
printf("Enter a number to convert from digits to words:");   
   for(i=0;(a=getchar())!='\n';i++)//getchar is used inorder to get number of chareacters.
   number[i]=a;                    //scanf can also be used and strlen in string.h used to have length.
   lenght=i;
puts("\nThe entered number is converted as:");
puts("-----------------------------------");   
    if(lenght==1)
      A(0);
    if(lenght==2&&number[0]=='1')
      B(1);
    if(lenght==2&&number[0]>'1')
    C(0,1);

    if(lenght==3){
    A(0);
    if(number[1]!='0'&&number[2]!='0')
    printf("Hundred and ");
    else printf("Hundred");
    C(1,2);   
}
getch();
printf("\n\n");
main();
}
int A(int a){
     switch(number[a]){
                      case '0': printf(" Zero");
                      break;
                      case '1': printf(" One ");
                      break;
                      case '2': printf(" Two ");
                      break;
                      case '3': printf(" Three ");
                      break;
                      case '4': printf(" Four ");
                      break;
                      case '5': printf(" Five ");
                      break;
                      case '6': printf(" Six ");
                      break;
                      case '7': printf(" Seven ");
                      break;
                      case '8': printf(" Eight ");
                      break;
                      case '9': printf(" Nine ");
                      break;
                      default: ;
                      

                      }
}

int B(int b){         
            switch(number[b]){
                      case '0': printf("Ten\n");
                      break;
                      case '1': printf("Eleven\n");
                      break;
                      case '2': printf("Twelve\n");
                      break;
                      case '3': printf("Thirteen\n");
                      break;
                      case '4': printf("Fourteen\n");
                      break;
                      case '5': printf("Fifteen\n");
                      break;
                      case '6': printf("Sixteen\n");
                      break;
                      case '7': printf("Seventeen\n");
                      break;
                      case '8': printf("Eighteen\n");
                      break;
                      case '9': printf("Nineteen\n");
                      break;
                      default: ;
                       }
     }
int C(int c, int d){
     switch(number[c]){
                      case '2':printf("Twenty ");
                      if(number[d]!='0')
                      A(d);
                      break;
                      case '3':printf("Thirty ");
                      if(number[d]!='0')
                      A(d);
                      break;
                      case '4':printf("Fourty ");
                      if(number[d]!='0')
                      A(d);
                      break;
                      case '5': printf("Fifty ");
                      if(number[d]!='0')
                      A(d);
                      break;
                      case '6': printf("Sixty ");
                      if(number[d]!='0')
                      A(d);
                      break;
                      case '7': printf("Seventy ");
                      if(number[d]!='0')
                      A(d);
                      break;
                      case '8': printf("Eighty ");
                      if(number[d]!='0')
                      A(d);
                      break;
                      case '9': printf("Ninety ");
                      if(number[d]!='0')
                      A(d);
                      break;
                      default: ;  
                       
                       
                       
                       }
     }

